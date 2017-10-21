#include <algorithm>
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

class phone_number {
private:
    string phone;

public:    
    phone_number(const string& num) {
        phone = num;
    }

    string number() const {
        string tmp = phone;

        for(char& c : tmp) {
            tmp.erase(remove_if(tmp.begin(), tmp.end(), ::ispunct), tmp.end());
            tmp.erase(remove_if(tmp.begin(), tmp.end(), ::isspace), tmp.end());
            tmp.shrink_to_fit();
        }

        if((tmp.length() >= 11 && tmp[0] != '1') || tmp.length() < 10) {
            return "0000000000";
        } else {
            if(tmp.length() >= 11)
                tmp.erase(0, 1);

            return tmp;
        }
    }

    string area_code() const {
        string tmp = phone;
        string code;

        for(int i = 0; i < 3; i++) {
            code.push_back(tmp[i]);
        }

        return code;
    }

    string get_phone_number() const {
        return phone;
    }
};

namespace std
{
    // changed function name from string to to_string
    string to_string(phone_number phone) {
        string tmp = phone.get_phone_number();

        tmp.insert(0, "(");
        tmp.insert(4, ")");
        tmp.insert(5, " ");
        tmp.insert(9, "-");

        return tmp;
    }
}

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

class bob {
    public:
        static string hey(string s) {
            // get rid of white spaces
            s.erase(remove(s.begin(), s.end(), ' '), s.end());

            // check if all chars are uppercase (shouting)
            bool shouting = true;
            for(int i = 0; i < s.length(); i++) {
                if(!isupper(s[i]) && !ispunct(s[i]) && !isdigit(s[i])) {
                    shouting = false;
                    break;
                }
            }

            // check if string contains numbers (and punctual chars) only
            bool numOnly = true;
            for(int i = 0; i < s.length(); i++) {
                if(!isdigit(s[i]) && !ispunct(s[i])) {
                    numOnly = false;
                    break;
                }
            }

            if(shouting && s.length() > 0 && !numOnly)
                return "Whoa, chill out!";
            else if(s.back() == '?')
                return "Sure.";
            else if(s.length() == 0)
                return "Fine. Be that way!";
            
            return "Whatever.";
        }
};

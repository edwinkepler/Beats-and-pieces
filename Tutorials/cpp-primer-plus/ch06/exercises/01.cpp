#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    while(cin.get(ch)) {
        if(ch == '@') {
            break;
        } else {
            if(!isdigit(ch)) {
                if(islower(ch)) {
                    char tmp = toupper(ch);
                    cout << tmp;
                } else if(isupper(ch)) {
                    char tmp = tolower(ch);
                    cout << tmp;
                } else {
                    cout << ch;
                }
            }
        }
    }
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while(ch != '.') {
        if(ch == ' ') {
            ++spaces;
        }
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total << " characters total in a sentence\n";
    return 0;
}

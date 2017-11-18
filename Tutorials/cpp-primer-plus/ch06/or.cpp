#include <iostream>

using namespace std;

int main() {
    cout << "Do you want to continue <y/n>";
    char ch;
    cin >> ch;
    if(ch == 'y' || ch == 'Y') {
        cout << "You were warned!\n";
    } else if(ch == 'n' || ch == 'N') {
        cout << "Wise choice... bye!\n";
    } else {
        cout << "Type in 'y' or 'n'\n";
    }
    return 0;
}

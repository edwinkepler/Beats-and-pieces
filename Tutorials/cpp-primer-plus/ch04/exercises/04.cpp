#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, last_name, answ;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your last name: ";
    cin >> last_name;
    answ = last_name + ", " + name;
    cout << answ << endl;
    return 0;
}

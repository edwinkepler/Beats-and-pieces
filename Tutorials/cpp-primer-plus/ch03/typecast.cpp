#include <iostream>

using namespace std;

int main() {
    int auks, bats, coots;

    auks = 19.99 + 11.99;
    bats = (int)19.99 + (int)11.99;
    coots = int(19.99) + int(11.99);

    cout << "auks = " << auks << endl;
    cout << "bats = " << bats << endl;
    cout << "coots = " << coots << endl;

    char ch = 'Z';
    cout << "Code for 'Z' is " << int(ch) << endl;
    cout << "Code for 'Z' is " << static_cast<int>(ch) << endl;
    return 0;
}

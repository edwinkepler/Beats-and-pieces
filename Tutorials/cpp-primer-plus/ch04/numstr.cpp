#include <iostream>

using namespace std;

int main() {
    cout << "What year was your home built?\n";
    int year;
    cin >> year;
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    return 0;
}

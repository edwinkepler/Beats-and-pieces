#include <iostream>
using namespace std;

int main() {
    int inches;
    cout << "Enter your height in inches: ";
    cin >> inches;
    cout << "Is's " << inches / 12 << " feet and " << inches - ((inches / 12) * 12) << " inch(es)." << endl;
    return 0;
}

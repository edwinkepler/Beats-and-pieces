#include <iostream>
#include <climits>

using namespace std;

bool is_int(double);

int main() {
    double num;
    cout << "Enter the int value: ";
    cin >> num;
    while(!is_int(num)) {
        cout << "Out of range - please try again: ";
        cin >> num;
    }
    int val = int(num);
    cout << "You have entered the int: " << val << endl;
    return 0;
}

bool is_int(double x) {
    if(x <= INT_MAX && x >= INT_MIN) {
        return true;
    } else {
        return false;
    }
}

#include <iostream>
using namespace std;

float celtofahr(int cel) {
    return cel * 1.8 + 32;
}

int main() {
    int n;
    cout << "Please enter Celsius value: ";
    cin >> n;
    cout << n << " degrees Celsius is " << celtofahr(n) << " degreed Fahrenheit." << endl;
    return 0;
}

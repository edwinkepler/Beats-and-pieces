#include <iostream>
using namespace std;

double toastronomicalunits(double lightyears) {
    return lightyears * 63240;
}

int main() {
    double lightyears;
    cout << "Enter number of light years: ";
    cin >> lightyears;
    cout << lightyears << " light years = " << toastronomicalunits(lightyears) << " astronomical units." << endl;
    return 0;
}

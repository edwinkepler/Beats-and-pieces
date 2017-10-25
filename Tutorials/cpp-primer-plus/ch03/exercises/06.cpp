#include <iostream>
using namespace std;

int main() {
    double dist, lit;
    cout << "Enter distance: ";
    cin >> dist;
    cout << "Enter litres: ";
    cin >> lit;
    cout << "Used " << lit / (dist / 100) << " litres per 100 kilometers." << endl;
    return 0;
}

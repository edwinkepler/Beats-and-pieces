#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double IN_TO_M = 0.0254; // inch to meters
    const double LBS_TO_KG = 2.2; // pounds to kilograms
    int feet, inches, pounds;
    cout << "Your height - feet (int): ";
    cin >> feet;
    cout << "inches (int): ";
    cin >> inches;
    cout << "Your weight in pounds: ";
    cin >> pounds;
    auto kg = pounds / LBS_TO_KG;
    auto m = ((feet * 12 + inches) * IN_TO_M);
    cout << "BMI: " << kg / (m * m) << endl;
    return 0;
}

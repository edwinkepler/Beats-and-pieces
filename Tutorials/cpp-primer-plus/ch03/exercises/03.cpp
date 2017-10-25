#include <iostream>
using namespace std;

int main() {
    double deg, min, sec;
    cout << "Enter a latitude in degrees, minutes, seconds:" << endl;
    cout << "Degrees: ";
    cin >> deg;
    cout << "Minutes: ";
    cin >> min;
    cout << "Seconds: ";
    cin >> sec;
    cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = ";
    cout << deg + ((min * 60 + sec) / (60 * 60));
    return 0;
}

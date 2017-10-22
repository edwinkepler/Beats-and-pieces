#include <iostream>

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub << endl;
    cout << "million tubs = " << tub * million << endl;
    cout << "ten millions tubs = " << tub * million * 10 << endl;
    cout << "mint = " << mint << endl;
    cout << "million mints = " << mint * million << endl;
    cout << "ten millions mints = " << mint * million * 10 << endl;
    return 0;
}

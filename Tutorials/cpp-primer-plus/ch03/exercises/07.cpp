#include <iostream>
using namespace std;

int main() {
    double consum;
    cout << "Enter gasoline consumtion in l/100km: ";
    cin >> consum;
    cout << "In mpg it is: " << (consum * 6.214) / 3.875 << endl;
    return 0;
}

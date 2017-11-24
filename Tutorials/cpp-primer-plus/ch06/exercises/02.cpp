#include <iostream>
#include <array>
using namespace std;

const short MAX = 10;

int main() {
    array<double, MAX> donations;
    cout << "Enter up to " << MAX << " donations, non numeric value will terminate input.\n";
    cout << "donation #1: ";

    int i = 0;
    while(i < MAX && cin >> donations[i]) {
        if(++i < MAX) {
            cout << "donations #" << i + 1 << ": ";
        }
    }

    double sum = 0.0;
    for(int j = 0; j < i; j++) {
        sum += donations[j];
    }
    short above = 0;
    for(int k = 0; k < i; k++) {
        if(donations[k] > sum / i) {
            above++;
        }
    }

    cout << "Avarage: " << sum / i << endl;
    cout << "Above avarage: " << above << endl;
    return 0;
}

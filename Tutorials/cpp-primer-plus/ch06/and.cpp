#include <iostream>

using namespace std;

const int ArSize = 6;

int main() {
    float naaq[ArSize];
    cout << "Enter NAAQs of your neighbors. Program terminates when you make " << ArSize 
         << " entries or enter negative value." << endl;

    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while(i < ArSize && temp >= 0) {
        naaq[i] = temp;
        ++i;
        if(i < ArSize) {
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if(i == 0) {
        cout << "No data - bye!";
    } else {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for(int j = 0; j < i; j++) {
            if(naaq[j] > you) {
                ++count;
            }
        }
        cout << count << " of your neighbors have greater awareness of the New Age then you do.\n";
    }
    return 0;
}

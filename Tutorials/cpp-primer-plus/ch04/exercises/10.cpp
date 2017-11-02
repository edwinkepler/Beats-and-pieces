#include <iostream>
using namespace std;

int main() {
    float arr[3];

    cout << "Enter three 40yd dashes: " << endl;
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];

    cout << "Dash 1: " << arr[0] << ", 2: " << arr[1] << ", 3: " << arr[2] << endl;
    cout << "Avarage: " << (arr[0] + arr[1] + arr[2]) / 3 << endl;
    return 0;
}

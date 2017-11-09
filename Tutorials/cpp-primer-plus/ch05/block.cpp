#include <iostream>

using namespace std;

int main() {
    cout << "Input five values: " << endl;
    double num;
    double sum = 0.0;
    for(int i = 1; i <= 5; i++) {
        cout << "Value " << i << ": ";
        cin >> num;
        sum += num;
    }
    cout << "Sum: " << sum << endl;
    cout << "Avarage: " << sum / 5 << endl;
    return 0;
}

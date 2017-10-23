#include <iostream>

using namespace std;

int main() {
    float a, b;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cin >> a >> b;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    return 0;
}

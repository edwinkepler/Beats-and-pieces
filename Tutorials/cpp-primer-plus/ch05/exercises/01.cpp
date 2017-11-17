#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers:\n";
    cin >> a;
    cin >> b;
    int sum = a;
    for(int i = a + 1; i <= b; ++i) {
        sum += i;
    }
    cout << sum;
    return 0;
}

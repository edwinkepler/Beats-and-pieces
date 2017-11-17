#include <iostream>
using namespace std;

int main() {
    cout << "Enter numbers\n";
    int tmp, sum = 0;
    while(tmp != 0) {
        cin >> tmp;
        sum += tmp;
        cout << "Sum so far: " << sum << endl;
    }
    return 0;
}

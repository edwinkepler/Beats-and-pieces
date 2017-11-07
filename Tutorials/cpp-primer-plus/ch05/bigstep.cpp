#include <iostream>

using namespace std;

int main() {
    cout << "Enter the integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";

    for(int i = 0; i < 100; i = i + by) {
        cout << i << endl;
    }
    return 0;
}

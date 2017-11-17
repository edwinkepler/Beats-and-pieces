#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for(int k = 1; k <= rows; k++) {
        for(int i = 0; i < rows - k; i++) {
            cout << "-";
        }
        for(int j = k; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

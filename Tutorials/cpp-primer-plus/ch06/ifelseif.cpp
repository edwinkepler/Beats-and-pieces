#include <iostream>

using namespace std;

const int FAVE = 27;

int main() {
    int n;
    cout << "Enter a number in a range of 1-100.\n";
    do {
        cin >> n;
        if(n < FAVE) {
            cout << "Too low\n";
        } else if(n > FAVE) {
            cout << "Too high\n";
        } else {
            cout << FAVE << " is right!\n";
        }
    } while(n != FAVE);
    return 0;
}

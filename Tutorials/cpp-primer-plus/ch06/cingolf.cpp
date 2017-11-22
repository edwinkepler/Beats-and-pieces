// cingolf.cpp -- non-numeric input skipped
#include <iostream>

using namespace std;

const int MAX = 5;

int main() {
    int golf[MAX];
    cout << "Please enter your gold scores\n";
    cout << "You must enter " << MAX << " rounds\n";

    int i;
    for(i = 0; i < MAX; i++) {
        cout << "round #" << i + 1 << ": ";
        while(!(cin >> golf[i])) {
            cin.clear(); // reset input
            while(cin.get() != '\n') {
                continue;
            }
            cout << "Please neter a number: ";
        }
    }

    double total = 0.0;
    for(i = 0; i < MAX; i++) {
        total += golf[i];
    }

    cout << total / MAX << " = avarage score " << MAX << " rounds\n";
    return 0;
}

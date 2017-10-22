#include <iostream>

using namespace std;

int main() {
    char ch = 'M';
    int i = ch;
    cout << "ASCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code: " << endl;
    ch++;
    i = ch;
    cout << "ASCII code for " << ch << " is " << i << endl;
    return 0;
}

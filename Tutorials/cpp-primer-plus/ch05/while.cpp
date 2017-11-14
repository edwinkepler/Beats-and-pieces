#include <iostream>

using namespace std;

const int ArSize = 20;

int main() {
    char name[ArSize];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Your name in ASCII codes:\n";
    int i = 0;
    while(name[i] != '\0') {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}

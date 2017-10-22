#include <iostream>

using namespace std;

int main() {
    int chest = 42;
    int weist = 0x42;
    int inseam = 042;

    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "weist = " << weist << " (0x42 in hex)" << endl;
    cout << "inseam = " << inseam << " (042 in octal)" << endl;
    return 0;
}

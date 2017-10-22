#include <iostream>
using namespace std;

void format(int h, int m) {
    cout << "Time " << h << ":" << m << endl;
}

int main() {
    int h, m;
    cout << "Enter hours: ";
    cin >> h;
    cout << "Enter mins: ";
    cin >> m;
    format(h, m);
    return 0;
}

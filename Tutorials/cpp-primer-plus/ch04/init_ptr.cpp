#include <iostream>

using namespace std;

int main() {
    int higgens = 5;
    int* pt = &higgens;

    cout << "Value of higgens: " << higgens << ", and address: " << &higgens << endl;
    cout << "Value of *pt: " << *pt << ", and value of pt: " << pt << endl;
    return 0;
}

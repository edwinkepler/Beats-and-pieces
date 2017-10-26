#include <iostream>

using namespace std;

int main() {
    const int ArrSize = 20;
    char name[ArrSize];
    char dessert[ArrSize];

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your favorite dessert: ";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;
    return 0;
}

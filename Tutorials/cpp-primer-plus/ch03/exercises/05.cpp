#include <iostream>
using namespace std;

int main() {
    long double pop, us;
    cout << "Enter the world population: ";
    cin >> pop;
    cout << "Enter population of the US: ";
    cin >> us;
    cout << "Population od US is " << (us / pop) * 100 << " % of the world population." << endl;
    return 0;
}

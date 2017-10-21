#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double area, side;
    cout << "Enter the floor area, in square meters, of your home: ";
    cin >> area;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " meter of the side" << endl;
    return 0;
}

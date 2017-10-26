#include <iostream>

using namespace std;

int main() {
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcost[3] = {20, 30, 5};

    cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;

    cout << "Size of yams array = " << sizeof(yams) << " bytes" << endl;
    cout << "Size of one element = " << sizeof(yams[0]) << " bytes" << endl;
    return 0;
}

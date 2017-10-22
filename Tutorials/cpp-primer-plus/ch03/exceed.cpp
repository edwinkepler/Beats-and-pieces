#include <iostream>
#include <climits>

#define ZERO 0

using namespace std;

int main() {
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    cout << "Add $1 to each account." << endl;
    sam++;
    sue++;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    cout << "Take $1 dollar from each account." << endl;
    sam--;
    sue--;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    return 0;
}

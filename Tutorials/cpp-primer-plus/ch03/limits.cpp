#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof(int) << "bytes." << endl;
    cout << "short is " << sizeof(short) << "bytes." << endl;
    cout << "long is " << sizeof(long) << "bytes." << endl;
    cout << "long long is " << sizeof(long long) << "bytes." << endl;
    cout << endl;

    cout << "max value of int: " << n_int << endl;
    cout << "max value of short: " << n_short << endl;
    cout << "max value of long: " << n_long << endl;
    cout << "max value of long long: " << n_llong << endl;
    cout << endl;

    cout << "min int value: " << INT_MIN << endl;
    cout << "bits ber byte: " << CHAR_BIT << endl;
    return 0;
}

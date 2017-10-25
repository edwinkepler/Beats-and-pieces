#include <iostream>
using namespace std;

int main() {
    long long sec;
    const int days = 86400;
    const int hours = 3600;
    const int minutes = 60;
    cout << "Enter the number of seconds: ";
    cin >> sec;
    cout << sec << " seconds = ";
    cout << sec / days << " days, ";
    sec -= (sec / days) * days;
    cout << sec / hours << " hours, ";
    sec -= (sec / hours) * hours;
    cout << sec / minutes << " minutes, ";
    cout << sec - ((sec / minutes) * minutes) << " seconds" << endl;
    return 0;
}

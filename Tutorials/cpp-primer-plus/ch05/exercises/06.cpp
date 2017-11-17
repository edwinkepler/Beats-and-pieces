#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    array<string, 12> months = {
        "January", "Febuary", "March", 
        "April", "May", "June", 
        "July", "August", "September", 
        "October", "November", "December"
    };
    array<array<int, 12>, 3> sells;
    cout << "Enter sells for 3 years\n";
    for(int i = 0; i < 3; i++) {
        cout << "Year " << i + 1 << endl;
        for(int j = 0; j < 12; j++) {
            cout << months[j] << ": ";
            int tmp;
            cin >> tmp;
            sells[i][j] = tmp;
        }
    }
    array<int, 3> sum = {0, 0, 0};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 12; j++) {
            sum[i] += sells[i][j];
        }
        cout << "You sold " << sum[i] << " units in a year " << i + 1 << endl;
    }
    cout << "You sold " << sum[0] + sum[1] + sum[2] << " units in 3 years\n";
    return 0;
}

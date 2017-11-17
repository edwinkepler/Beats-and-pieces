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
    array<int, 12> sells;
    cout << "Enter sells for\n";
    for(int i = 0; i < 12; i++) {
        cout << months[i] << ": ";
        int tmp;
        cin >> tmp;
        sells[i] = tmp;
    }
    int sum = 0;
    for(int i = 0; i < 12; i++) {
        sum += sells[i];
    }
    cout << "You sold " << sum << " units.\n";
    return 0;
}

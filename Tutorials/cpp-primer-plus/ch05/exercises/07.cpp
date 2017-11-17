#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct car {
    string make;
    int year;
};

int main() {
    int num;
    vector<car*> catalog;
    cout << "How many cars do you want to catalog? ";
    cin >> num;
    for(int i = 0; i < num; i++) {
        car* tmp = new car;
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        cin >> tmp->make;
        cout << "Please enter the year made: ";
        cin >> tmp->year;
        catalog.push_back(tmp);
    }
    cout << "Here is your collection:\n";
    for(int i = 0; i < catalog.size(); i++) {
        cout << catalog[i]->year << " " << catalog[i]->make << endl;
    }
    return 0;
}

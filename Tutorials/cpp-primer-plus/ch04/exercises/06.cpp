#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string name;
    float weight;
    int calories;
};

int main() {
    CandyBar snack[2] = {
        {"Mocha", 2.1, 1000},
        {"Upsala", 2.1, 2000}
    };

    cout << "Name: " << snack[0].name << endl;
    cout << "Weight: " << snack[0].weight << endl;
    cout << "Calories: " << snack[0].calories << endl;

    cout << "Name: " << snack[1].name << endl;
    cout << "Weight: " << snack[1].weight << endl;
    cout << "Calories: " << snack[1].calories << endl;
    return 0;
}

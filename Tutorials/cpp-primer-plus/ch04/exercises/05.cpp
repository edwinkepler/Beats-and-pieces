#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
    string name;
    float weight;
    int calories;
};

int main() {
    CandyBar* snack = new CandyBar;
    snack->name = "Mocha Munch";
    snack->weight = 2.3;
    snack->calories = 350;

    cout << "Name: " << snack->name << endl;
    cout << "Weight: " << snack->weight << endl;
    cout << "Calories: " << snack->calories << endl;
    return 0;
}

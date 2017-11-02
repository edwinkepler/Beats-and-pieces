#include <iostream>
#include <string>
using namespace std;

struct Pizza {
    string name;
    int diameter;
    float weight;
};

int main() {
    Pizza* piz = new Pizza;

    cout << "Enter pizza name: ";
    getline(cin, piz->name);
    cout << "Enter pizza diameter: ";
    cin >> piz->diameter;
    cout << "Enter pizza weight: ";
    cin >> piz->weight;

    cout << "Name: " << piz->name << endl;
    cout << "Diameter: " << piz->diameter << endl;
    cout << "Weight: " << piz->weight << endl;
    return 0;
}

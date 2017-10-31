#include <iostream>

using namespace std;

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    inflatable bouquet = {
        "sunflowers",
        1.88,
        29.99
    };

    cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;

    inflatable choice = bouquet;
    cout << "choice: " << choice.name << " for $" << choice.price << endl;
    return 0;
}

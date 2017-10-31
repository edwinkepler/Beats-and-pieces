#include <iostream>

using namespace std;

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    inflatable guest[2] = {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 567.99}
    };

    cout << "The guests " << guest[0].name << " and " << guest[1].name << " have combined volume of "
         << guest[0].volume + guest[1].volume << " cubic feet.\n";
    return 0;
}

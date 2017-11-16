#include <iostream>

using namespace std;

const int Cities = 4;
const int Years = 4;

int main() {
    const char* cities[Cities] = {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble"
    };

    int maxtemps[Years][Cities] = {
        {96, 100, 87, 101},
        {96, 98, 91, 107},
        {97, 101, 93, 108},
        {98, 103, 95, 109}
    };

    cout << "Maximum temperatures for years 2008 - 2011\n\n";
    for(int city = 0; city < Cities; ++city) {
        cout << cities[city] << ":\t";
        for(int year = 0; year < Years; ++year) {
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }
    return 0;
}

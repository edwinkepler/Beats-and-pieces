#include <iostream>
using namespace std;

int main() {
    float daphne = 100;
    float cleo = 100;
    int years = 0;
    do {
        daphne += 100 * 0.10;
        cleo += cleo * 0.05;
        years++;
    } while(daphne > cleo);
    cout << "Years: " << years << ", Daphne: " << daphne << ", Cleo: " << cleo << endl;
    return 0;
}

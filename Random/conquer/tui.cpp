#include <iostream>
#include <vector>
#include <memory>
#include "src/citizen.hpp"
#include "src/simulation.hpp"

using namespace std;

int main() {
    const char race_0 = '0';
    const char race_1 = '1';

    shared_ptr<Simulation> sim { new Simulation(race_0, race_1, 20, 50) };
    sim->print();
    while(1) {
        sim->progress(1);
        sim->print();
    }

    // cout << "Graveyard: \n";
    // auto v_gy = sim->graveyard();
    // for(const auto& i: v_gy) {
    //     cout << i->race() << ", " << i->name() << ", " << i->age() << endl;
    // }

    return 0;
}

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
    sim->progress(10);
    sim->print();
    return 0;
}

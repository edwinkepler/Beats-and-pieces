#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <vector>
#include <memory>
#include "citizen.hpp"

using namespace std;

class Simulation {
public:
    Simulation(char, char, int, int);
    ~Simulation();

    void print();

private:
    vector<vector<shared_ptr<Citizen>>> v_land;

    int id_0 = 0;
    int id_1 = 0;
};

#endif // SIMULATION_HPP

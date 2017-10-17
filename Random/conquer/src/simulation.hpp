#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <vector>
#include <tuple>
#include "citizen.hpp"

class Simulation {
public:
    Simulation(char, char, int, int);
    ~Simulation();

    void print();
    std::tuple<int, int> land_size();

private:
    std::string create_name();

    std::vector<std::vector<Citizen*>> v_land;
};

#endif // SIMULATION_HPP

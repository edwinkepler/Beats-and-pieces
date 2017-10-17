#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include <vector>
#include <tuple>
#include "citizen.hpp"

class Simulation {
public:
    Simulation(char, char, int, int);
    ~Simulation();

    void progress(int);
    void print();
    std::tuple<int, int> land_size();

private:
    std::string create_name();

    std::vector<std::vector<Citizen*>> v_land;
    std::vector<Citizen*> v_graveyard;

    int i_steps = 0;
    const int DEATH_FROM_AGE = 6;
};

#endif // SIMULATION_HPP

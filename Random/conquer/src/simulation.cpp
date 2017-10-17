#include "simulation.hpp"

#include <exception>
#include <iostream>
#include <random>

Simulation::Simulation(char _race_0, char _race_1, int _x, int _y) {
    if(_x < 10 || _y < 10) {
        throw std::invalid_argument("Land too small.");
    } else {
        v_land.resize(_x, std::vector<Citizen*>(_y, nullptr));

        v_land[0][0] = new Citizen(_race_0, create_name());
        v_land[1][0] = new Citizen(_race_0, create_name());
        v_land[0][1] = new Citizen(_race_0, create_name());
        v_land[1][1] = new Citizen(_race_0, create_name());

        v_land[_x - 1][_y - 1] = new Citizen(_race_1, create_name());
        v_land[_x - 2][_y - 1] = new Citizen(_race_1, create_name());
        v_land[_x - 1][_y - 2] = new Citizen(_race_1, create_name());
        v_land[_x - 2][_y - 2] = new Citizen(_race_1, create_name());
    }
}

Simulation::~Simulation() {
    for(int i = 0; i < v_land.size(); ++i) {
        for(int j = 0; j < v_land[0].size(); ++j) {
            if(v_land[i][j] != nullptr) {
                delete v_land[i][j];
            }
        }
    }
}

void Simulation::progress(int _step) {
    if(_step <= 0) {
        throw std::invalid_argument("Step must be a positive number.");
    } else {
        i_steps = i_steps + _step;
        for(int i = 0; i < _step; i++) {
            // Check for death from age
            for(int i = 0; i < v_land.size(); ++i) {
                for(int j = 0; j < v_land[0].size(); ++j) {
                    if(v_land[i][j] != nullptr) {
                        auto tmp = v_land[i][j];
                        if(tmp->age() >= DEATH_FROM_AGE) {
                            tmp->kill();
                            v_graveyard.push_back(tmp);
                            v_land[i][j] = nullptr;
                        }
                    }
                }
            }

            // Add age
            for(int i = 0; i < v_land.size(); ++i) {
                for(int j = 0; j < v_land[0].size(); ++j) {
                    if(v_land[i][j] != nullptr) {
                        v_land[i][j]->grow();
                    }
                }
            }
        }
    }
}

void Simulation::print() {
    for(int i = 0; i < v_land.size(); ++i) {
        for(int j = 0; j < v_land[0].size(); ++j) {
            if(v_land[i][j] != nullptr) {
                std::cout << v_land[i][j]->race();
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

std::tuple<int, int> Simulation::land_size() {
    return std::make_tuple(v_land.size(), v_land[0].size());
}

std::string Simulation::create_name() {
    // randomize int from a range 1-999 for a number part of a name
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis_n(0, 999);
    int number = dis_n( gen );

    // int to string converstion
    // if randomized number is lower then 100, insert zeros at the begining
    std::string s_number;
    if(number < 100) {
        s_number = std::to_string(number);
        while(s_number.length() < 3) {
            s_number.insert(0, 1, '0');
        }
    } else {
        s_number = std::to_string(number);
    }

    // randomize int for a char part of a robot name
    // ASCII codes for uppercase characters are in range 65-90
    std::uniform_int_distribution<> dis_c_a(65, 90);
    std::uniform_int_distribution<> dis_c_b(65, 90);
    char char_a = dis_c_a(gen);
    char char_b = dis_c_b(gen);
    // I found that inserting chars into string is a easiest way
    // also that's the only way that worked so, yeah
    s_number.insert(s_number.begin(), char_a);
    s_number.insert(s_number.begin(), char_b);

    return s_number;
}

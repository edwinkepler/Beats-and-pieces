#include "simulation.hpp"

#include <exception>
#include <iostream>
#include <random>

Simulation::Simulation(char _race_0, char _race_1, int _x, int _y) {
    if(_x < 10 || _y < 10) {
        throw std::invalid_argument("Land too small.");
    } else {
        v_land.resize(_x, std::vector<Citizen*>(_y, nullptr));

        v_land[0][0] = new Citizen(_race_0, create_name(), 1);
        v_land[1][0] = new Citizen(_race_0, create_name(), 0);
        v_land[0][1] = new Citizen(_race_0, create_name(), 1);
        v_land[1][1] = new Citizen(_race_0, create_name(), 0);

        v_land[_x - 1][_y - 1] = new Citizen(_race_1, create_name(), 1);
        v_land[_x - 2][_y - 1] = new Citizen(_race_1, create_name(), 0);
        v_land[_x - 1][_y - 2] = new Citizen(_race_1, create_name(), 1);
        v_land[_x - 2][_y - 2] = new Citizen(_race_1, create_name(), 0);
    }
}

Simulation::Simulation(char _race_0, char _race_1, char _race_2, char _race_3, int _x, int _y) {
    if(_x < 10 || _y < 10) {
        throw std::invalid_argument("Land too small.");
    } else {
        v_land.resize(_x, std::vector<Citizen*>(_y, nullptr));

        v_land[0][0] = new Citizen(_race_0, create_name(), 1);
        v_land[1][0] = new Citizen(_race_0, create_name(), 0);
        v_land[0][1] = new Citizen(_race_0, create_name(), 1);
        v_land[1][1] = new Citizen(_race_0, create_name(), 0);

        v_land[_x - 1][_y - 1] = new Citizen(_race_1, create_name(), 1);
        v_land[_x - 2][_y - 1] = new Citizen(_race_1, create_name(), 0);
        v_land[_x - 1][_y - 2] = new Citizen(_race_1, create_name(), 1);
        v_land[_x - 2][_y - 2] = new Citizen(_race_1, create_name(), 0);

        v_land[0][_y - 1] = new Citizen(_race_2, create_name(), 1);
        v_land[1][_y - 1] = new Citizen(_race_2, create_name(), 0);
        v_land[0][_y - 2] = new Citizen(_race_2, create_name(), 1);
        v_land[1][_y - 2] = new Citizen(_race_2, create_name(), 0);

        v_land[_x - 1][0] = new Citizen(_race_3, create_name(), 1);
        v_land[_x - 1][1] = new Citizen(_race_3, create_name(), 0);
        v_land[_x - 2][0] = new Citizen(_race_3, create_name(), 1);
        v_land[_x - 2][1] = new Citizen(_race_3, create_name(), 0);
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
        int i_x = v_land.size();
        int i_y = v_land[0].size();
        for(int i = 0; i < i_steps; i++) {
            for(int i = 0; i < i_x; i++) {
                for(int j = 0; j < i_y; j++) {
                    if(v_land[i][j] != nullptr) {
                        auto ptr_citizen = v_land[i][j];
                        // Make offspring
                        if(i != 0 && j != 0 && i != i_x - 1 && j != i_y - 1) {
                            // Check if parents are avaible
                            if(v_land[i][j - 1] != nullptr) {
                                if(ptr_citizen->sex() != v_land[i][j - 1]->sex() 
                                    && ptr_citizen->race() == v_land[i][j - 1]->race()
                                    && (ptr_citizen->age() > 0 && v_land[i][j - 1]->age() > 0))
                                {
                                    // Check for avaible space
                                    check_for_space_for_offspring(i, j, ptr_citizen->race());
                                }
                            }
                            if(v_land[i][j + 1] != nullptr) {
                                if(ptr_citizen->sex() != v_land[i][j + 1]->sex() 
                                    && ptr_citizen->race() == v_land[i][j + 1]->race()
                                    && (ptr_citizen->age() > 0 && v_land[i][j + 1]->age() > 0))
                                {
                                    // Check for avaible space
                                    check_for_space_for_offspring(i, j, ptr_citizen->race());
                                }
                            }
                            if(v_land[i - 1][j] != nullptr) {
                                if(ptr_citizen->sex() != v_land[i - 1][j]->sex() 
                                    && ptr_citizen->race() == v_land[i - 1][j]->race()
                                    && (ptr_citizen->age() > 0 && v_land[i - 1][j]->age() > 0))
                                {
                                    // Check for avaible space
                                    check_for_space_for_offspring(i, j, ptr_citizen->race());
                                }
                            }
                            if(v_land[i + 1][j] != nullptr) {
                                if(ptr_citizen->sex() != v_land[i + 1][j]->sex() 
                                    && ptr_citizen->race() == v_land[i + 1][j]->race()
                                    && (ptr_citizen->age() > 0 && v_land[i + 1][j]->age() > 0))
                                {
                                    // Check for avaible space
                                    check_for_space_for_offspring(i, j, ptr_citizen->race());
                                }
                            }
                            if(v_land[i - 1][j - 1] != nullptr) {
                                if(ptr_citizen->sex() != v_land[i - 1][j - 1]->sex() 
                                    && ptr_citizen->race() == v_land[i - 1][j - 1]->race()
                                    && (ptr_citizen->age() > 0 && v_land[i - 1][j - 1]->age() > 0))
                                {
                                    // Check for avaible space
                                    check_for_space_for_offspring(i, j, ptr_citizen->race());
                                }
                            }
                            if(v_land[i + 1][j + 1] != nullptr) {
                                if(ptr_citizen->sex() != v_land[i + 1][j + 1]->sex() 
                                    && ptr_citizen->race() == v_land[i + 1][j + 1]->race()
                                    && (ptr_citizen->age() > 0 && v_land[i + 1][j + 1]->age() > 0))
                                {
                                    // Check for avaible space
                                    check_for_space_for_offspring(i, j, ptr_citizen->race());
                                }
                            }
                            if(v_land[i - 1][j + 1] != nullptr) {
                                if(ptr_citizen->sex() != v_land[i - 1][j + 1]->sex() 
                                    && ptr_citizen->race() == v_land[i - 1][j + 1]->race()
                                    && (ptr_citizen->age() > 0 && v_land[i - 1][j + 1]->age() > 0))
                                {
                                    // Check for avaible space
                                    check_for_space_for_offspring(i, j, ptr_citizen->race());
                                }
                            }
                            if(v_land[i + 1][j - 1] != nullptr) {
                                if(ptr_citizen->sex() != v_land[i + 1][j - 1]->sex() 
                                    && ptr_citizen->race() == v_land[i + 1][j - 1]->race()
                                    && (ptr_citizen->age() > 0 && v_land[i + 1][j - 1]->age() > 0))
                                {
                                    // Check for avaible space
                                    check_for_space_for_offspring(i, j, ptr_citizen->race());
                                }
                            }
                        }
                        // Add age
                        ptr_citizen->grow();
                        // Check for death from age
                        if(ptr_citizen->age() >= DEATH_FROM_AGE) {
                            std::random_device rd;
                            std::mt19937 eng(rd());
                            std::uniform_int_distribution<> two(0, 1);
                            if(two(eng) == 1) {
                                ptr_citizen->kill();
                                v_graveyard.push_back(ptr_citizen);
                                v_land[i][j] = nullptr;
                            }
                        }
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

std::vector<Citizen*> Simulation::graveyard() {
    return v_graveyard;
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

void Simulation::check_for_space_for_offspring(int _i, int _j, char _race) {
    if(v_land[_i + 1][_j] == nullptr) {
        v_land[_i + 1][_j] = new Citizen(_race, create_name());
    } else if(v_land[_i - 1][_j] == nullptr) {
        v_land[_i - 1][_j] = new Citizen(_race, create_name());
    } else if(v_land[_i][_j + 1] == nullptr) {
        v_land[_i][_j + 1] = new Citizen(_race, create_name());
    } else if(v_land[_i][_j - 1] == nullptr) {
        v_land[_i][_j - 1] = new Citizen(_race, create_name());
    } else if(v_land[_i - 1][_j - 1] == nullptr) {
        v_land[_i - 1][_j - 1] = new Citizen(_race, create_name());
    } else if(v_land[_i + 1][_j + 1] == nullptr) {
        v_land[_i + 1][_j + 1] = new Citizen(_race, create_name());
    } else if(v_land[_i + 1][_j - 1] == nullptr) {
        v_land[_i + 1][_j - 1] = new Citizen(_race, create_name());
    } else if(v_land[_i -1 ][_j + 1] == nullptr) {
        v_land[_i - 1][_j + 1] = new Citizen(_race, create_name());
    }
}

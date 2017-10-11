#include "citizen.hpp"
#include <random>

Citizen::Citizen(char _race, int _id) {
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> ten(0, 10);
    std::uniform_int_distribution<> two(0, 1);

    i_str = ten(eng);
    f_sex = two(eng);
    i_fertility = ten(eng);
    i_id = _id;
    c_race = _race;
    f_dead = false;
    i_age = 0;
    ten(eng) > i_plague_threshold ? f_plague_carrier = true : f_plague_carrier = false;
}

Citizen::~Citizen() {};

int Citizen::str() {
    return i_str;
}

bool Citizen::sex() {
    return f_sex;
}

int Citizen::fertility() {
    return i_fertility;
}

int Citizen::id() {
    return i_id;
}

char Citizen::race() {
    return c_race;
}

bool Citizen::dead() {
    return f_dead;
}

void Citizen::kill() {
    f_dead = true;
}

bool Citizen::plague_carrier() {
    return f_plague_carrier;
}

int Citizen::age() {
    return i_age;
}

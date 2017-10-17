#ifndef CITIZEN_HPP
#define CITIZEN_HPP

#include <string>

class Citizen {
public:
    Citizen(char, std::string);
    ~Citizen();

    int str();
    bool sex();
    int fertility();
    std::string name();
    char race();
    bool dead();
    bool plague_carrier();
    int age();

    void grow();
    void kill();

private:
    int i_str;
    bool f_sex;
    int i_fertility;
    std::string s_name;
    char c_race;
    bool f_dead;
    int i_age;
    bool f_plague_carrier;

    const int i_plague_threshold = 8;
};

#endif // CITIZEN_HPP

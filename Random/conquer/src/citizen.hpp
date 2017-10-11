#ifndef CITIZEN_HPP
#define CITIZEN_HPP

class Citizen {
public:
    Citizen(char, int);
    ~Citizen();

    int str();
    bool sex();
    int fertility();
    int id();
    char race();
    bool dead();
    void kill();
    bool plague_carrier();
    int age();

private:
    int i_str;
    bool f_sex;
    int i_fertility;
    int i_id;
    char c_race;
    bool f_dead;
    int i_age;
    bool f_plague_carrier;

    const int i_plague_threshold = 8;
};

#endif // CITIZEN_HPP

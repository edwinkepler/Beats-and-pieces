#include <iostream>
#include <vector>
#include <memory>
#include "citizen.hpp"

using namespace std;

int main() {
    int id_0 = 0;
    int id_1 = 0;
    const char race_0 = '0';
    const char race_1 = '1';
    
    vector<Citizen*> vc;
    for(int i = 0; i < 100; i++) {
        auto tmp = new Citizen(race_0, id_0++);
        vc.push_back(tmp);
    }
    for(const auto& i : vc) {
        cout    << "id: " << i->id() 
                << ", sex: " << i->sex()
                << ", str: " << i->str()
                << ", fertility: " << i->fertility()
                << ", plagued: " << i->plague_carrier() << endl;
    }
    return 0;
}
/* 
 * @brief Game of Life
 * @copyright 2017 Edwin Kepler
 */

#include <iostream>
#include <vector>
#include "src/game_of_life.hpp"

void print_colony(std::vector<std::vector<bool> > _colony) {
    for(int i = 0; i < _colony.size(); ++i) {
        for(int j = 0; j < _colony[0].size(); ++j) {
            (_colony[i][j]) ? std::cout << "O" : std::cout << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    auto col = new_rand_colony(24, 80);

    do {
        auto current = col;
        col = progress(current);
        print_colony(current);
        std::cout << "Press ENTER to progress..." << std::endl;
    } while(std::cin.get() == '\n');

    return 0;
}

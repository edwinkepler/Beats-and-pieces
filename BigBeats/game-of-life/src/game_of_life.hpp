/* 
 * @brief Conway's Game of Life
 * @copyright 2017 Edwin Kepler
 */

#include <vector>
#include <random>

std::vector<std::vector<bool> > new_rand_colony(int x, int y) {
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(1, 40);

    std::vector<std::vector<bool> > colony;
    colony.resize(x, std::vector<bool>(y, 0));

    int cx = (x - x % 4) / 4;
    int cy = (y - y % 4) / 4;
    for(int i = cx; i < x - cx; ++i) {
        for(int j = cy; j < y - cy; ++j) {
            if(distr(eng) == 40) {
                colony[i][j] = true;
            } else {
                colony[i][j] = false;
            }
        }
    }
    return colony;
}

int check_x(int _x, std::vector<std::vector<bool> >& _c) {
    if(_x < 0) {
        return _c.size();
    } else if(_x > _c.size()) {
        return 0;
    } else {
        return _x;
    }
}

int check_y(int _y, std::vector<std::vector<bool> >& _c) {
    if(_y < 0) {
        return _c[0].size();
    } else if(_y > _c[0].size()) {
        return 0;
    } else {
        return _y;
    }
}

std::vector<std::vector<bool> > progress(std::vector<std::vector<bool> > _colony) {
    std::vector<std::vector<bool> > new_colony;
    new_colony.resize(_colony.size(), std::vector<bool>(_colony[0].size(), 0));

    for(int i = 1; i < _colony.size() - 1; ++i) {
        for(int j = 1; j < _colony[0].size() - 1; ++j) {
            int alive = 0;
            _colony[check_x(i-1, _colony)][check_y(j-1, _colony)] 
                ? alive++ 
                : alive = alive;
            _colony[check_x(i, _colony)][check_y(j-1, _colony)] 
                ? alive++ 
                : alive = alive;
            _colony[check_x(i+1, _colony)][check_y(j-1, _colony)] 
                ? alive++ 
                : alive = alive;

            _colony[check_x(i-1, _colony)][check_y(j+1, _colony)] 
                ? alive++ 
                : alive = alive;
            _colony[check_x(i, _colony)][check_y(j+1, _colony)] 
                ? alive++ 
                : alive = alive;
            _colony[check_x(i+1, _colony)][check_y(j+1, _colony)] 
                ? alive++ 
                : alive = alive;

            _colony[check_x(i-1, _colony)][check_y(j, _colony)] 
                ? alive++ 
                : alive = alive;
            _colony[check_x(i+1, _colony)][check_y(j, _colony)] 
                ? alive++ 
                : alive = alive;

            if(_colony[i][j] && alive < 2) {
                new_colony[i][j] = false;
            } else if(_colony[i][j] && alive > 3) {
                new_colony[i][j] = false;
            } else if(!_colony[i][j] && alive == 2) {
                new_colony[i][j] = true;
            } else {
                new_colony[i][j] = _colony[i][j];
            }
        }
    }

    return new_colony;
}

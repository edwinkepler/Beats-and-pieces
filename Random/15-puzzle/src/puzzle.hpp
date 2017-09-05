#ifndef PUZZLE_HPP
#define PUZZLE_HPP

#include <vector>

using namespace std;

class Puzzle {
public:
    Puzzle(bool, int);

    void scrabble(int);

    bool down();
    bool up();
    bool left();
    bool right();

    bool solved();
    vector<vector<int>> frame();
private:
    vector<vector<int>> board;
    vector<vector<int>> board_solved;
};

#endif // PUZZLE_HPP

#include "puzzle.hpp"

#include <random>

Puzzle::Puzzle(bool f, int pass) {
    board.resize(4, vector<int>(4, 16));
    board_solved.resize(4, vector<int>(4, 16));
    int tile = 1;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            board[i][j] = tile;
            board_solved[i][j] = tile;
            ++tile;
        }
    }

    if(f)
        scrabble(pass);
}

void Puzzle::scrabble(int pass) {
    const int seed = 40;

    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0, seed);

    for(int i = 0; i < pass; ++i) {
        if(distr(eng) >= 0 && distr(eng) < seed / 4) {
            if(!down()) --i;
        } else if(distr(eng) >= seed / 4 && distr(eng) < seed / 2) {
            if(!up()) --i;
        } else if(distr(eng) >= seed / 2 && distr(eng) < ((seed / 2) + (seed / 4))) {
            if(!right()) --i;
        } else if(distr(eng) >= ((seed / 2) + (seed / 4)) && distr(eng) <= seed) {
            if(!left()) --i;
        }
    }
}

bool Puzzle::down() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(board[i][j] == 16 && i < 3) {
                auto tmp = board[i + 1][j];
                board[i + 1][j] = 16;
                board[i][j] = tmp;
                return true;
            }
        }
    }
    return false;
}

bool Puzzle::up() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(board[i][j] == 16 && i != 0) {
                auto tmp = board[i - 1][j];
                board[i - 1][j] = 16;
                board[i][j] = tmp;
                return true;
            }
        }
    }
    return false;
}

bool Puzzle::left() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(board[i][j] == 16 && j != 0) {
                auto tmp = board[i][j - 1];
                board[i][j - 1] = 16;
                board[i][j] = tmp;
                return true;
            }
        }
    }
    return false;
}

bool Puzzle::right() {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(board[i][j] == 16 && j < 3) {
                auto tmp = board[i][j + 1];
                board[i][j + 1] = 16;
                board[i][j] = tmp;
                return true;
            }
        }
    }
    return false;
}

bool Puzzle::solved() {
    return (board == board_solved) ? true : false;
}

vector<vector<int>> Puzzle::frame() {
    return board;
}

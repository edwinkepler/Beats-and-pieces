#include <iostream>
#include <string>

#include "src/puzzle.hpp"

using namespace std;

void print(vector<vector<int>> b) {
    cout << "-------------" << endl;
    for(int i = 0; i < 4; i++) {
        cout << "|";
        for(int j = 0; j < 4; j++) {
            if(b[i][j] < 10)
                cout << " ";
            if(b[i][j] == 16) {
                cout << "  |";
            } else {
                cout << b[i][j] << "|";
            }
        }
        cout << endl << "-------------" << endl;
    }
}

int main() {
    Puzzle puz(true, 30);
    print(puz.frame());
    cout << "choose: w, s, a, d" << endl;

    do {
        char tmp;
        cin >> tmp;

        switch(tmp) {
            case 's':
                puz.down();
                print(puz.frame());
                break;
            case 'w':
                puz.up();
                print(puz.frame());
                break;
            case 'a':
                puz.left();
                print(puz.frame());
                break;
            case 'd':
                puz.right();
                print(puz.frame());
                break;
            default:
                cout << "Wrong input, try again - w, s, a, d" << endl;
        }
    } while(!puz.solved());

    cout << "You solved the puzzle, congrats!" << endl;
    return 0;
}

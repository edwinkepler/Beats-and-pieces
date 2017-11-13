#include <iostream>

using namespace std;

int main() {
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    for(int i = 0; quizscores[i] == 20; i++) {
        cout << "quiz " << i << " is a 20" << endl;
    }
    return 0;
}

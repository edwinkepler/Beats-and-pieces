#include <iostream>
using namespace std;

void menu();

int main() {
    menu();
    char choice;
    cin >> choice;
    while(choice != 'q') {
        switch(choice) {
            case 'a':
                cout << "Blah\n";
                break;
            case 'b':
                cout << "Chopin was a pianist\n";
                break;
            case 'c':
                cout << "Maple is the tree\n";
                break;
            case 'd':
                cout << "The Game\n";
                break;
            default:
                cout << "Please enter a valid option\n";
                break;
        }
        menu();
        cin >> choice;
    }

    return 0;
}

void menu() {
    cout << "Please enter one of the fallowing choices:\n";
    cout << "a) carnivore\tb) pianist\n";
    cout << "c) tree\t\td) game\n";
    cout << "q) quit\n";
}

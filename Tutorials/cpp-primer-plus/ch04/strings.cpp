#include <iostream>
#include <cstring> // for the strlen() function

using namespace std;

int main() {
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "Howdy! I'm " << name2 << "! What's your name?" << endl;
    cin >> name1;
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored in a array of ";
    cout << sizeof(name1) << " bytes." << endl;
    cout << "Your initial is " << name1[0] << "." << endl;
    name2[3] = '\0';
    cout << "Here are the first 3 letters of my name: " << name2 << endl;
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "penguin";
    string s2, s3;

    cout << "You can addign one string to another." << endl;
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    cout << "You can assing C-style string to a string object." << endl;
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;

    cout << "You can concatenate strings" << endl;
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;

    cout << "You can append strings" << endl;
    s1 += s2;
    cout << "s1: " << s1 << endl;

    return 0;
}

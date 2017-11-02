#include <iostream>
#include <string>
using namespace std;

int main() {
    string s_name, s_last_name;
    char c_grade;
    int i_age;

    cout << "First name: ";
    getline(cin, s_name);
    cout << "Last name: ";
    cin >> s_last_name;
    cout << "Your grade: ";
    cin >> c_grade;
    cout << "Your age: ";
    cin >> i_age;

    cout << "Name: " << s_name << ", " << s_last_name << endl;
    cout << "Grade: " << c_grade << endl;
    cout << "Age: " << i_age << endl;
    return 0;
}

/*
    Raul Aguilar
    CS 150 1686
    Homework 1: If/Switch
*/

#include <iostream>
#include <istream>
#include <string>

using namespace std;

int main() {
    bool takingClass = false;
    char answer[2];
    char grade;

    cout << "Are you taking a class?" << endl;
    cin.get(answer, 2);

    cout << "\'" << answer << "\'" << endl;

    if (strcmp(answer, "Y") == 0 || strcmp(answer, "y") == 0) {
        cout << "Please enter your grade:" << endl;
        cin.ignore();
        grade = cin.get();

        switch (toupper(grade)) {
        case 'A' : case 'B':
            cout << "Great job!" << endl;
            break;
        case 'C':
            cout << "You're doing alright." << endl;
            break;
        case 'D': case 'F':
            cout << "You can improve." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
            break;
        }

    } else if (strcmp(answer, "N") == 0 || strcmp(answer,"n") == 0) {
        cout << "Thank you for using our system." << endl;
    } else {
        cout << "Invalid input. Program exiting." << endl;
    }

    return 0;
}

/*
    Raul Aguilar
    CS 150 1686
    Homework 1: If/Switch
*/

#include <iostream>

using namespace std;

int main() {
    char answer;
    char grade;

    // Ask the user if they are taking a class
    cout << "Are you taking a class?" << endl;
    answer = cin.get();

    if (answer == 'Y' || answer == 'y') {
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

    } else if (answer == 'N' || answer == 'n') {
        cout << "Thank you for using the system." << endl;
    } else {
        cout << "Invalid input. Program exiting." << endl;
    }

    return 0;
}

/*
    @author     Raul Aguilar
    @date       February 11, 2020
    @class      CS 150 1686
    @assignment Homework 1: If/Switch
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer;
    char firstChar;
    char grade;

    cout << "Are you taking a class?" << endl;
    getline(cin, answer);
    firstChar = answer[0];

    if (firstChar == 'Y' || firstChar == 'y') {
        cout << "Please enter your grade:" << endl;
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

    } else if (firstChar == 'N' || firstChar == 'n') {
        cout << "Thank you for using the system." << endl;
    } else {
        cout << "Invalid input. Program exiting." << endl;
    }

    return 0;
}

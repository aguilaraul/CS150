/*
    Raul Aguilar
    CS150
    Week 2 Thursday, January 30, 2020
    Formatting and Manipulating Input and Output, String Operators,
    Math Operations
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {

    //cout << left << setw(30) << "\"Hello World!\"";
    //cout << setw(14) << "|Here";

    //double x = 9.5312;
    //cout << fixed << setprecision(3) << x;

    string fullName = "";
    cout << "Enter your first and last name\n";
    getline(cin, fullName);
    cout << "Hello, " << fullName << endl;

    return 0;
}

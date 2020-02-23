/*
    @author Raul Aguilar
    CS150 Lab 2
*/

#include <iostream>
using namespace std;

int main() {
    string name = "";
    bool isCSMajor = false;
    char favPunc = '.';
    int num1 = 0, num2 = 0;

    // ask name
    cout << "Please enter your name: \n";
    cin >> name;
    cout << "Hello, " << name << endl;

    // ask if cs major
    cout << "Are you a CS major? True = 1, False = 0 \n";
    cin >> isCSMajor;
    cout << "CS Major: " << isCSMajor << endl;

    // ask favorite punctuation
    cout << "What's your favorite punctuation mark?\n";
    cin >> favPunc;
    cout << "Your favorite punctuatuin mark is: " << favPunc << endl;

    // ask for two numbers
    cout << "Please enter an integer:\n";
    cin >> num1;
    cout << "Please enter another integer:\n";
    cin >> num2;

    // display result
    cout << num1 << " / " << num2 << " = " << (double) num1 / (double) num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1/num2 << 'r' << num1%num2 << endl;

    return 0;
}

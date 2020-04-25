/**
 * @author  Raul Aguilar
 * @date    April 24, 2020
 * CS 150 Lab 21
 */

#include <iostream>
#include <string>

using namespace std;

bool has4Digits(int id);
int inputStudentID();
double inputStudentGPA();
string inputStudentName();
int inputStudentUnits();

struct StudentRecord {
    int studentID;
    double gpa;
    string fullName;
    int units;
};

const int NUMOFSTUDENTS = 2;

int main() {
    StudentRecord students[NUMOFSTUDENTS];

    for(int i = 0; i < NUMOFSTUDENTS; i++) {
        cout << "For student #" << i+1 << endl;
        students[i].studentID = inputStudentID();
        students[i].gpa = inputStudentGPA();
        cin.ignore();
        students[i].fullName = inputStudentName();
        students[i].units = inputStudentUnits();
    }

    for(int i = 0; i < NUMOFSTUDENTS; i++) {
        cout << endl;
        cout << "Student ID: " << students[i].studentID << endl;
        cout << "GPA: " << students[i].gpa << endl;
        cout << "Name: " << students[i].fullName << endl;
        cout << "Units: " << students[i].units << endl;
    }

    return 0;
}

/**
 * Checks if the student ID has 4 digits
 * @param id Student ID to check
 * @return True if student ID is 4 digits, false otherwise
 */
bool has4Digits(int id) {
    int digits = 1;
    while(id/=10) {
        digits++;
    }
    return digits == 4;
}

/**
 * Validates that student ID is a positive number and 4 digits
 * @return Positive 4-digit student ID
 */
int inputStudentID() {
    int id;

    cout << "Enter student ID:" << endl;
    cin >> id;

    while(!has4Digits(id) || id < 0) {
        cout << "Student ID needs to be 4 digits and a positive number. Reenter the student ID:" << endl;
        cin >> id;
    }

    return id;
}

/**
 * Validates that student GPA is between 0 and 4 (inclusive)
 * @return GPA between 0 and 4
 */
double inputStudentGPA() {
    double gpa;

    cout << "Enter student's GPA:" << endl;
    cin >> gpa;

    while(gpa < 0 || gpa > 4) {
        cout << "GPA needs to be between 0 and 4. Reenter the GPA:" << endl;
        cin >> gpa;
    }

    return gpa;
}

/**
 * Asks user for the full name of the student
 * @return Full name of the student
 */
string inputStudentName() {
    string fullName;

    cout << "Enter full name:" << endl;
    getline(cin, fullName);

    return fullName;
}

/**
 * Validates that the number of units is positive
 * @return Number of units
 */
int inputStudentUnits() {
    int units;

    cout << "Enter number of units:" << endl;
    cin >> units;
    while(units < 0) {
        cout << "Units cannot be negative. Reenter number of units:" << endl;
        cin >> units;
    }

    return units;
}
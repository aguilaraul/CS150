/**
 * @author  Raul Aguilar
 * @date    April 24, 2020
 * CS 150 Lab 22
 */

#include <iostream>

using namespace std;

class Circle {
    const double PI = 3.14;
public:
    double radius;
    double calcArea();
} c1, c2;

double Circle::calcArea() {
    return PI * (radius * radius);
}

int main() {
    // First circle
    cout << "Enter radius of the circle:" << endl;
    cin >> c1.radius;
    cout << "Area of the circle: " << c1.calcArea() << endl;
    cout << "Radius of the circle: " << c1.radius << endl;
    
    cout << endl;

    // Second circle
    cout << "Enter radius of the circle:" << endl;
    cin >> c2.radius;
    cout << "Area of the circle: " << c2.calcArea() << endl;
    cout << "Radius of the circle: " << c2.radius << endl;

    return 0;
}
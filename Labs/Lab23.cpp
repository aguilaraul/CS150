/**
 * @author  Raul Aguilar
 * @date    April 25, 2020
 * CS 150 Lab 23
 */

#include <iostream>

using namespace std;

const double PI = 3.14159;

class Circle {
    double radius;
public:
    Circle();
    Circle(double);
    void setRadius(double);
    double getRadius();
    double calcArea();
};

Circle::Circle() {
    radius = 0.0;
}

Circle::Circle(double r) {
    if (r > -1) {
        radius = r;
    } else {
        radius = 0;
    }
}

void Circle::setRadius(double r) {
    if (r > -1) {
        radius = r;
    }
    else {
        radius = 0;
    }
}

double Circle::getRadius() {
    return radius;
}

double Circle::calcArea() {
    return PI * (radius * radius);
}


void printCircle(Circle);

int main() {
    Circle c1;
    Circle c2(-2);
    double radius;

    cout << "Set the radius of the Cirlce 1:" << endl;
    cin >> radius;
    c1.setRadius(radius);

    cout << endl << "Circle 1" << endl;
    printCircle(c1);
    cout << endl;
    cout << "Circle 2" << endl;
    printCircle(c2);
    cout << endl;

    cout << "Set the radius of the Cirlce 2:" << endl;
    cin >> radius;
    c2.setRadius(radius);

    cout << endl << "Circle 1" << endl;
    printCircle(c1);
    cout << endl;
    cout << "Circle 2" << endl;
    printCircle(c2);
    cout << endl;

    return 0;
}

void printCircle(Circle c) {
    cout << "Area of circle = " << c.calcArea() << endl;
    cout << "Radius = " << c.getRadius() << endl;
}
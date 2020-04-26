/**
 * @author	Raul Aguilar
 * @date	April 25, 2020
 * CS 150 1686 Lab 24
 * Circle main class
 */
 
#include <iostream>
#include "circle.h"

using namespace std;

void printCircle(Circle);

int main() {
	Circle c1;
	double radius;
	
	cout << "Circle 1:" << endl;
	printCircle(c1);
	
	cout << endl << "Set the radius for Circle 1:" << endl;
	cout << "Radius: ";
	cin >> radius;
	cout << endl;
	
	c1.setRadius(radius);
	
	cout << "Circle 1:" << endl;
	printCircle(c1);
	
	cout << endl << "Create a second circle and set the radius:" << endl;
	cout << "Radius: ";
	cin >> radius;
	cout << endl;
	
	Circle c2(radius);
	
	cout << "Circle 1:" << endl;
	printCircle(c1);
	cout << "Circle 2:" << endl;
	printCircle(c2);
	
	return 0;
}

void printCircle(Circle c) {
	cout << "Radius = " << c.getRadius() << endl;
	cout << "Area of Circle = " << c.calcArea() << endl;
}

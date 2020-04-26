/**
 * @author	Raul Aguilar
 * @date	April 25, 2020
 * CS 150 1686 Lab 24
 * Circle class
 */

#include <iostream>
#include "circle.h"

using namespace std;

const double PI = 3.14159;

/**
 * Default constructor sets radius of the circle to 0
 */
Circle::Circle() {
	radius = 0.0;
}

/**
 * Constructor sets radius of the circle to desired input if positive number
 * @param r Radius to set the circle to
 */
Circle::Circle(double r) {
	if(r > -1) {
		radius = r;
	} else {
		radius = 0.0;
	}
}

void Circle::setRadius(double r) {
	if(r > -1) {
		radius = r;
	} else {
		radius = 0;
	}
}

double Circle::getRadius() {
	return radius;
}

double Circle::calcArea() {
	return PI * (radius * radius);
}

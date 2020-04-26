/**
 * @author	Raul Aguilar
 * @date	April 25, 2020
 * CS 150 1686 Lab 24
 * Circle header
 */
 
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double);
	
	void setRadius(double);
	double getRadius();
	
	double calcArea();		
};
#endif

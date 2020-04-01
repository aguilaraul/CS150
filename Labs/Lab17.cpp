/*
	@author	Raul Aguilar
	@date	April 1, 2020
	Lab 17: Find the absolute value of the difference of two numbers.
*/
#include <iostream>

using namespace std;

double distance(double d1, double d2);

int main() {
	double d1 = 0, d2 = 0;

	cout << "Enter a number:" << endl;
	cin >> d1;
	cout << "Enter another number:" << endl;
	cin >> d2;
	cout << endl;

	double result = distance(d1, d2);

	cout << "The distance between " << d1 << " and " << d2 << " is " << result << endl;
	return 0;
}

double distance(double d1, double d2) {
	if (d1 - d2 < 0) {
		return (d1 - d2) * -1;
	}
	else {
		return d1 - d2;
	}
}
/*
	@author	Raul Aguilar
	@date	April 1, 2020
	Lab 20: Find the max, min, and average of four numbers
*/
#include <iostream>

using namespace std;

void findMinMaxAvg( double n1, double n2, double n3, double n4,
					double &min, double &max, double &avg);
double min(double n1, double n2, double n3, double n4);
double max(double n1, double n2, double n3, double n4);
double avg(double n1, double n2, double n3, double n4);


int main() {
	double n1, n2, n3, n4;
	double minumum, maximum, average;

	cout << "Please enter 4 numbers:" << endl;
	cout << "Number 1:\t";
	cin >> n1;
	cout << "Number 2:\t";
	cin >> n2;
	cout << "Number 3:\t";
	cin >> n3;
	cout << "Number 4:\t";
	cin >> n4;
	cout << endl;

	findMinMaxAvg(n1, n2, n3, n4, minumum, maximum, average);

	cout << "Minimum is " << minumum << endl;
	cout << "Maximum is " << maximum << endl;
	cout << "Average is " << average << endl;
	return 0;
}

void findMinMaxAvg( double n1, double n2, double n3, double n4,
					double &minimum, double &maximum, double &average) {
	minimum = min(n1, n2, n3, n4);
	maximum = max(n1, n2, n3, n4);
	average = avg(n1, n2, n3, n4);
}

double min(double n1, double n2, double n3, double n4) {
	double min = n1;

	if (n2 < min) {
		min = n2;
	}
	if (n3 < min) {
		min = n3;
	}
	if (n4 < min) {
		min = n4;
	}

	return min;
}

double max(double n1, double n2, double n3, double n4) {
	double max = n1;

	if (n2 > max) {
		max = n2;
	}
	if (n3 > max) {
		max = n3;
	}
	if (n4 > max) {
		max = n4;
	}

	return max;
}

double avg(double n1, double n2, double n3, double n4) {
	return (n1 + n2 + n3 + n4) / 4;
}
/*
	@author	Raul Aguilar
	CS150 Lab 1: Create a program that asks the user to enter two integer
	numbers, then tells the user: the sum of the numbers, the difference of the
	numbers (first minus second), the product of the numbers, and the quotient
	of the numbers with remainder. Each of these should be output as a separate
	line and include the equation.
*/

#include <iostream>

using namespace std;

int main() {
	int num1, num2 = 0;

	cout << "Please enter an integer:\n";
	cin >> num1;
	cout << "Please enter another integer:\n";
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << 'r' << num1 % num2 << endl;

	return 0;
}

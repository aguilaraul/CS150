/*
	@author	Raul Aguilar
	@date	February 18, 2020
	Lab 10: Print the multiplication table from 1-9 similarly to what is shown
	below, including the legend on the top and sides. Calculate the values and
	use nested loops to complete this lab. Your table should line up nicely
	(remember setw!)
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 9;

int main() {
	//print the top row of numbers
	cout << left << setw(3) << "";
	for (int i = 1; i <= SIZE; i++) {
		cout << right << setw(3) << i;
	}
	cout << endl;
	cout << right << setw(30) << "___________________________" << endl;
	// Print the multiplication table
	for (int row = 1; row <= SIZE; row++) {
		cout << row << " |";
		for (int col = 1; col <= SIZE; col++) {
			cout << setw(3) <<  row * col;
		}
		cout << endl;
	}
}

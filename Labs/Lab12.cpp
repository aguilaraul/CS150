/*
	@author	Raul Aguilar
	@date	02.27.2020
	Lab 12: Multiplication table using 2d array
*/
#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 10;
const int WIDTH = 3;

int main() {
	int table[SIZE][SIZE];
	// Initialize table
	for (int row = 0; row < SIZE; row++) {
		for (int col = 0; col < SIZE; col++) {
			table[row][col] = row * col;
		}
	}

	// print the top row of numbers
	cout << left << setw(WIDTH) << "";
	for (int i = 0; i < SIZE; i++) {
		cout << right << setw(WIDTH) << i;
	}
	cout << endl;
	// make and print border
	string border = "";
	for (int i = 0; i < SIZE*4; i++) {
		border = border + "_";
	}
	cout << right << setw(SIZE*WIDTH) << border << endl;

	// Print the table
	for (int row = 0; row < SIZE; row++) {
		cout << row << " |";
		for (int col = 0; col < SIZE; col++) {
			cout << setw(3) << table[row][col];
		}
		cout << endl;
	}

	return 0;
}

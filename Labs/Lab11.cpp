/*
	@author Raul Aguilar
	@date	February 20, 2020
	CS150 Lab 11
*/

#include <iostream>

using namespace std;

const int SIZE = 1000;

int main() {
	double arr[SIZE] = { 0 };
	int index = 0;

	for (int i = 0; i < SIZE; i++) {
		arr[i] = i * 7.5;
	}

	cout << "Enter an array index:" << endl;
	cin >> index;
	cout << endl;

	if (index < SIZE-SIZE || index > SIZE-1) {
		cout << "Index out of range." << endl;
	}
	else {
		cout << "The value in index [" << index << "] is " << arr[index] << endl;

	}

}

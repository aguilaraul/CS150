/*
	@author	Raul Aguilar
	@date	February 22, 2020
	CS150 Lab 8
*/

#include <iostream>

using namespace std;

int main() {
	int evenCounter = 0, oddCounter = 0;
	int input = -1;
	
	do {
		cout << "Enter an integer (-1 to quit)" << endl;
		cin >> input;
		
		if(input > -1) {
			if(input % 2 == 0) {
				cout << input << " is even." << endl;
				evenCounter++;
			} else {
				cout << input << " is odd." << endl;
				oddCounter++;
			}
		}
		cout << endl;
	} while(input > -1);
	
	
	if(evenCounter > 0 || oddCounter > 0) {
		cout << "Odd numbers: " << oddCounter << endl;
		cout << "Even numbers: " << evenCounter << endl;
	} else {
		cout << "No numbers entered.";
	}
	
	return 0;
}

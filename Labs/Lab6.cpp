/*
	Raul Aguilar
	CS 150
	Lab 6: Flow control using switch statements
*/
#include <iostream>

using namespace std;

int main() {
	int input = 0;

	cout << "Please enter an integer:" << endl;
	cin >> input;

	switch (input) {
	case 0:
		cout << "Zero" << endl;
		break;
	case 1:
		cout << "One" << endl;
		break;
	case 2:
		cout << "Two" << endl;
		break;
	case 3:
		cout << "Three" << endl;
		break;
	case 4:
		cout << "Four" << endl;
		break;
	case 5:
		cout << "Five" << endl;
		break;
	case 6:
		cout << "Six" << endl;
		break;
	case 7:
		cout << "Seven" << endl;
		break;
	case 8:
		cout << "Eight" << endl;
		break;
	case 9:
		cout << "Nine" << endl;
		break;
	case 10:
		cout << "Ten" << endl;
		break;
	default:
		cout << input << " is not between 0 and 10." << endl;
		break;
	}

	return 0;
}
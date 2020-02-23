/*
	@author	Raul Aguilar
	@date	February 18, 2020
	Lab 9: Ask the user to enter an integer (positive or negative does not
	matter). Repeat the integer given by the user and tell them whether it is
	even or odd. After the user enters the first integer, and after each
	subsequent integer entered, ask the user if they wish to enter another
	integer.  If they answer 'Y' or 'y' then repeat, if they answer 'N' , 'n',
	or any other character then tell them how many odd numbers they entered and
	how many even numbers they entered.
	Note that the user should always enter at least one integer, only ask them
	if they have another after the first entry.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 0;
	int evenCounter = 0, oddCounter = 0;
	string answer;
	char firstChar;
	bool hasMoreIntegers = false;

	do {
		cout << "Enter an integer:" << endl;
		cin >> num;
		cin.ignore();

		if (num % 2 == 0) {
			cout << num << " is even." << endl;
			evenCounter++;
		}
		else {
			cout << num << " is odd." << endl;
			oddCounter++;
		}

		cout << endl;
		cout << "Do you have another integer to enter?" << endl;
		getline(cin, answer);
		firstChar = toupper(answer[0]);

		if (firstChar == 'Y') {
			hasMoreIntegers = true;
		}
		else {
			hasMoreIntegers = false;
		}
		cout << endl;
	} while(hasMoreIntegers);

	cout << "Even numbers: " << evenCounter << endl;
	cout << "Odd numbers: " << oddCounter << endl;
}

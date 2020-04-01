/*
	@author	Raul Aguilar
	@date	March 31, 2020
	Lab 15 + 16
*/
#include <iostream>
#include <string>
#include <array>

using namespace std;

//const double quarter = 0.25;
//const double dime = 0.10;
//const double nickel = 0.05;
//const double penny = 0.01;

int main() {
	string answer = "";
	double price = 0, tender = 0, change = 0;
	double coin[] = { 0.25, 0.10, 0.05, 0.01 };
	double coinChange[] = { 0.0, 0.0, 0.0, 0.0 };

	do {
		cout << "Enter price of item:" << endl;
		cin >> price;
		cout << "Enter tender amount:" << endl;
		cin >> tender;
		change = tender - price;
		if (change > 0) {
			cout << "Change: $" << change << endl;
			for (int i = 0; i < 4; i++) {
				cout << "# " << i << endl;
				cout << "Change: " << change << endl;
				cout << "Coin: " << coin[i] << endl;
				cout << change - coin[i] << endl;

				while (change - coin[i] >= 0) {
					change -= coin[i];
					coinChange[i]++;
					cout << "---" << endl;
					cout << change << endl;
					cout << coinChange[i] << endl << endl;
				}
				
				cout << "Coins: " << coinChange[i] << endl;
			}

		} else if (change == 0) {
			cout << "No change." << endl;
		} else {
			cout << "Not enough money inserted." << endl;
		}

		cout << endl << "Coins:" << endl;
		for (int i = 0; i < 4; i++) {
			cout << coinChange[i] << endl;
		}


		cout << endl << "Do you have another entry?" << endl;
		cin.ignore();
		getline(cin, answer);

	} while (answer[0] == 'y' || answer[0] == 'Y');
	
	cout << "Thank you for your purchase." << endl;
}
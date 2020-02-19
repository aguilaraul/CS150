/*
	@author	Raul Aguilar
	@date	February 18, 2020
	Lab 10: Print the multiplication table from 1-9 similarly to what is shown below,
	including the legend on the top and sides.  Calculate the values and use nested
	loops to complete this lab. Your table should line up nicely (remember setw!)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	cout << left << setw(3) << "";
	for (int i = 1; i <= 9; i++) {
		cout << right << setw(3) << i;
	}
	cout << endl;
	cout << right << setw(30) << "___________________________" << endl;
	//cout << right << setw(30) << "1 2 3 4 5 6 7 8 9" << endl;
	for (int i = 1; i <= 9; i++) {
		cout << i << " |";

		for (int j = 1; j <= 9; j++) {
			cout << setw(3) << i * j;
		}
		cout << endl;
	}
}
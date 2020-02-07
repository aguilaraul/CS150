#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int input = 0;
	
	cout << "Please enter an integer:\n";
	cin >> input;
	
	// check if input is even or odd
	if((input % 2) == 0) { // is even
		// is divisible by 5 and 3
		if((input % 5 == 0) && (input % 3 == 0)) {
			cout << input << " is divisible by 5 and 3." << endl;
		} else {
			cout << input << " is not divisible by 5 and 3." << endl;
		}
	} else { // is odd
		// check if it's positive or negative
		if(input >= 0) {
			cout << input << " is a positive number." << endl;
		} else {
			cout << input << " is negative." << endl;
		}
	}
	
	// test if in range of -100 and 100
	if( abs(input) <= 100) {
		cout << input << " is between -100 and 100." << endl;
	} else {
		cout << input << " is not between -100 and 100." << endl;
	}
	
	return 0;
}

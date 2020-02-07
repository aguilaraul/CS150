// Flow Control: Brannching
#include <iostream>

using namespace std;

int main() {
	int num = 0;

	cout << "Enter an integer\n";
	cin >> num;
	if ((num % 2) == 0) {
		cout << num << " is even!";
	} else {
		cout << num << " is odd.";
	}

	return 0;
}
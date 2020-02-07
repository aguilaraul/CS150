// FLow control: continued branching
#include <iostream>

using namespace std;

int main() {
	int input = 0;
	cout << "Enter an integer:\n";
	cin >> input;

	if( (input % 2) == 0) {
		cout << "Input is divisable by 2!\n";
		if ( (input % 3) == 0) {
			cout << "Input is divisible by 2 and 3!\n";
		}
	}

	return 0;
}
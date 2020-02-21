#include <iostream>

using namespace std;

int main() {
	int size = 0;
	
	do {
		cout << "Enter a size for the triangle between 1 and 50:" << endl;
		cin >> size;
	} while (size < 1 || size > 50);
	cout << endl;
	
	// Top of pyramid
	for(int i = 1; i < size; i++) {
		for(int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	// Midpoint to bottom of pyramid
	for(int i = size; i > 0; i--) {
		for(int j = i; j > 0; j--)	{
			cout << "*";
		}
		cout << endl;
	}
}

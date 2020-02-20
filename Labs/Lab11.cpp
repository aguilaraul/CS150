#include <iostream>

using namespace std;

const int SIZE = 1000;

int main() {
	double arr[SIZE] = { 0 };
	int index = 0;

	for (int i = 0; i < 1000; i++) {
		arr[i] = i * 7.5;
	}
	
	cout << "Enter an array index:" << endl;
	cin >> index;
	cout << endl;
	
	if (index < 0 || index > 999) {
		cout << "Index out of range." << endl;
	}
	else {
		cout << "The value in index [" << index << "] is " << arr[index] << endl;
		
	}

}

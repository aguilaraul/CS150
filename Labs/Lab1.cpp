#include <iostream>

using namespace std;

int main() {
	int num1, num2 = 0;

	cout << "Please enter an integer:\n";
	cin >> num1;
	cout << "Please enter another integer:\n";
	cin >> num2;

	cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << " = " << num1 / num2 << 'r' << num1 % num2 << endl;

	return 0;
}

/*
	@author	Raul Aguilar
	@date	Thursday February 27, 2020
	File Input / Output
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
	/* OUTPUT */

	// ofstream fout("hello.txt");
	ofstream fout;
	fout.open("hello.txt");

	cout << right << setw(20) << "Hello File!" << endl;
	fout << right << setw(20) << "Hello File!" << endl;

	fout.close();

	/* INPUT */

	ifstream fin("numbers.txt");

	int num = 0;

	while (fin >> num) {
		cout << num << endl;
	}
	fin.close();

	return 0;
}
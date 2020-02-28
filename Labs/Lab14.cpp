/*
	@author	Raul Aguilar
	@date	February 27, 2020
	Lab 14: File Name and Output
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	int sum = 0;
	int num = 0;
	string fileName = "";
	
	cout << "Please enter a file name:" << endl;
	getline(cin, fileName);
	fileName = fileName + ".txt";
	
	ifstream fin(fileName);
	if (!fin) {
		cout << "File could not be opened." << endl;
	}
	else {
		while(fin >> num) {
			cout << "Read " << num << " from file." << endl;
			sum += num;	
		}
		cout << "Total is " << sum << "." << endl;
	}

	fin.close();
	
	return 0;
}

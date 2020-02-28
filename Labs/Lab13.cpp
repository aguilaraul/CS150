/*
	@author	Raul Aguilar
	@date	February 27, 2020
	Lab 13: Sentence
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	string sentence = "";
	
	cout << "Enter a sentence" << endl;
	getline(cin, sentence);
	
	ofstream fout("sentence.txt");
	fout << sentence;
	fout.close();
	
	return 0;
}

/**
	@author	Raul Aguilar
	@date	Tuesday March 10, 2020
	Homework 2: Nested loops and file output
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile;
    outputFile.open("triangle.txt");
    int size = 0;

    do {
        cout << "Enter a size for the triangle between 1 and 50:" << endl;
        cin >> size;
    } while (size < 1 || size > 50);
    cout << endl;

    // Top of pyramid
    for(int i = 1; i < size; i++) {
        for(int j = 0; j < i; j++) {
            outputFile << "*";
        }
        outputFile << endl;
    }

    // Midpoint to bottom of pyramid
    for(int i = size; i > 0; i--) {
        for(int j = i; j > 0; j--) {
            outputFile << "*";
        }
        outputFile << endl;
    }
    outputFile.close();
    
    cout << "Triangle saved to file." << endl;
    
    return 0;
}

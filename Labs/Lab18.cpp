/*
    @author Raul Aguilar
    @date   April 1, 2020
    Lab 18: Draw a tree
*/
#include <iostream>
#include <iomanip>

using namespace std;

void drawTreeTop();
void drawTreeTrunk(int height);
void drawTree(int height, int trees);

int main() {
    int height = 0, trees = 0;

    cout << "Enter the height of the tree:" << endl;
    cin >> height;
    cout << "Enter the number of trees:" << endl;
    cin >> trees;
    cout << endl;
    drawTree(height, trees);
    return 0;
}

void drawTreeTop() {
    cout << setw(4) << "/\\" << endl;
    cout << setw(2) << "/" << setw(3) << "\\" << endl;
    cout << setw(6) << "/____\\" << endl;
}

void drawTreeTrunk(int height) {
    for (int i = 0; i < height; i++) {
        cout << setw(4) << "||" << endl;
    }
}

void drawTree(int height, int trees) {
    for (int i = 0; i < trees; i++) {
        drawTreeTop();
        drawTreeTrunk(height);
        cout << endl;
    }
}
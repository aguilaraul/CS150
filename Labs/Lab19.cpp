/*
    @author Raul Aguilar
    @date   April 1, 2020
    Lab 19: Modify Lab 18 to accept multiple requests and keep
    track of total number of trees drawn
*/
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void drawTreeTop();
void drawTreeTrunk(int height);
void drawTree(int height, int trees);

int main() {
    string answer = "";
    int height = 0, trees = 0;

    do {
        cout << "Enter the height of the tree:" << endl;
        cin >> height;
        cout << "Enter the number of trees:" << endl;
        cin >> trees;
        cout << endl;
        drawTree(height, trees);

        cin.ignore();
        cout << "Keep drawing trees?" << endl;
        getline(cin, answer);
        cout << endl;

    } while (answer[0] == 'y' || answer[0] == 'Y');

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
    static int treeCounter = 0;
    treeCounter += trees;
    for (int i = 0; i < trees; i++) {
        drawTreeTop();
        drawTreeTrunk(height);
        cout << endl;
    }

    cout << "There are " << treeCounter << " trees in the forest." << endl;
}
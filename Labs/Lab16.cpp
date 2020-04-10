/*
 * @author  Raul Aguilar
 * @date    April 9, 2020
 * Lab 15 + 16: Make efficient change with coins
 */
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void makeChange(double c, int coinChange[]);

const int SIZE = 4;
const int COINS[] = { 25, 10, 5, 1 };
const string NAMES[] = { "Quarters: ", "Dimes: ", "Nickels: ", "Pennies: " };

int main() {
    string answer = "";
    bool noChange = false, error = false;
    double price = 0, amt = 0, change = 0;
    int coinChange[] = { 0, 0, 0, 0 };
    ofstream fout("receipt.txt");

    do {
        cout << "Enter the price of the item:" << endl;
        cin >> price;
        cout << "Enter tender amount:" << endl;;
        cin >> amt;
        cout << endl;
        change = amt - price;

        if (change > 0) {
            noChange = false;
            error = false;
            makeChange(change, coinChange);

            cout << "Change" << endl << "---" << endl;
            for (int i = 0; i < SIZE; i++) {
                cout << NAMES[i] << coinChange[i] << endl;
            }
            cout << endl;
        }
        else if (change == 0) {
            noChange = true;
            error = false;
            cout << "No change." << endl;
        }
        else {
            noChange = true;
            error = true;
            cout << "Error: Not enough money inserted." << endl;
        }

        // Out to file
        if (!error) {
            fout << "Price: $";
            fout << setw(21) << setprecision(2) << fixed << price << endl;
            fout << "Tender Amount: $";
            fout << setw(13) << amt << endl << endl;

            if (!noChange) {
                fout << "Change" << endl;
                for (int i = 0; i < SIZE; i++) {
                    fout << setw(11) << left << NAMES[i];
                    fout << setw(18) << right << coinChange[i] << endl;
                }
            }
            else {
                fout << "No change." << endl;
            }
            fout << endl << "******************************" << endl;
        }

        cout << "Do you have another entry?" << endl;
        cin.ignore();
        getline(cin, answer);
        cout << endl;
    } while (answer[0] == 'y' || answer[0] == 'Y');
    fout.close();

    cout << "Thank you for using our service." << endl;
    return 0;
}

void makeChange(double c, int coinChange[]) {
    int change = (double)(c * 100.0);

    for (int i = 0; i < SIZE; i++) {
        coinChange[i] = change / COINS[i];
        change -= coinChange[i] * COINS[i];
    }
}
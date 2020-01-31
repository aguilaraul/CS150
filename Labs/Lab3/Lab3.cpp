// Lab3.cpp : Replicate a grocery store receipt

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string border = "*******************************";
    int itemWidth = 24, charWidth = 1, priceWidth = 6;
    string item1 = "", item2 = "", item3 = "";
    double price1 = 0, price2 = 0, price3 = 0;
    double taxRate = 0;
    double subtotal, total, tax;

    // Ask for first item
    cout << "Please enter the first item:\n";
    getline(cin, item1);
    cout << "Please enter the price of " << item1 << ": " << endl;
    cin >> price1;
    cin.ignore();
    cout << endl;

    // Ask for second item
    cout << "Please enter the second item:\n";
    getline(cin, item2);
    cout << "Please enter the price of " << item2 << ": " << endl;
    cin >> price2;
    cin.ignore();
    cout << endl;

    // Ask for third item
    cout << "Please enter the third item:\n";
    getline(cin, item3);
    cout << "Please enter the price of " << item3 << ": " << endl;
    cin >> price3;
    cin.ignore();
    cout << endl;

    // Ask for tax rate
    cout << "Please enter the tax rate as a decimal:\n";
    cin >> taxRate;
    cout << endl;

    //Print receipt
    cout << border << endl;

    // Print items
    cout << left << setw(itemWidth) << item1;
    cout << right << setw(charWidth) << "$";
    cout << setw(priceWidth) << fixed << setprecision(2) << price1;
    cout << endl;

    cout << left << setw(itemWidth) << item2;
    cout << right << setw(charWidth) << "$";
    cout << setw(priceWidth) << price2;
    cout << endl;

    cout << left << setw(itemWidth) << item3;
    cout << right << setw(charWidth) << "$";
    cout << setw(priceWidth) << price3;
    cout << endl;

    cout << endl;

    // Calculate totals
    subtotal = price1 + price2 + price3;
    tax = taxRate * subtotal;
    total = subtotal + tax;
    
    // Print totals
    cout << left << setw(itemWidth) << "Subtotal";
    cout << right << setw(charWidth) << "$";
    cout << setw(priceWidth) << subtotal;
    cout << endl;

    cout << left << setw(itemWidth) << "Tax";
    cout << right << setw(charWidth) << "$";
    cout << setw(priceWidth) << tax;
    cout << endl;

    cout << left << setw(itemWidth) << "Total";
    cout << right << setw(charWidth) << "$";
    cout << setw(priceWidth) << total;
    cout << endl;

    cout << border << endl;
    cout << "Thank you for shopping with us!\n";
    cout << border << endl;

    return 0;
}

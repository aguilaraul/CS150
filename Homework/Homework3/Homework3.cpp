/*
    @author Raul Aguilar
    @date   April 2, 2020
    CS 150 Homework 3
*/
#include <iostream>
#include <array>

using namespace std;

const int SIZE = 5;

void printArray(const double arr[]);
void add(double arr[], double operand);
void sub(double arr[], double operand);
void mult(double arr[], double operand);
void div(double arr[], double operand);

int main() {
    double numbers[SIZE] = {0.0, 0.0, 0.0, 0.0, 0.0};
    double operand;
    char operation;

    cout << "Please enter five numbers:" << endl;
    for(int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    cout << "\nYou entered:" << endl;
    printArray(numbers);
    cout << "\nPlease enter an operation to perform: + - * /" << endl;
    cin >> operation;
    cout << "\nAnd an operand:" << endl;
    cin >> operand;
    cout << endl;

    if(operation == '/' && operand == 0) {
        while(operand == 0) {
            cout << "Cannot divide by zero. Please enter a new operand:" << endl;
            cin >> operand;
        }
    }

    switch (operation) {
    case '+':
        add(numbers, operand);
        break;
    case '-':
        sub(numbers, operand);
        break;
    case '*':
        mult(numbers, operand);
        break;
    case '/':
        div(numbers, operand);
        break;
    default:
        cout << "Invalid operation to perform." << endl;
        break;
    }
    
    cout << "Result:" << endl;
    printArray(numbers);

    return 0;
}

/**
 * Prints contents of an array one item per line.
 * 
 * @param arr The array to print
 */
void printArray(const double arr[]) {
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}

/**
 * Sums each item in an array by the operand and stores it in the item's
 * position replacing the original value.
 * 
 * @param arr The array to use
 * @param operand The number to add to each 
 */
void add(double arr[], double operand) {
    for(int i = 0; i < SIZE; i++) {
        arr[i] += operand;
    }
}

/**
 * Subtracts each item in an array by the operand and stores it in the item's
 * position replacing the original value.
 * 
 * @param arr The array to use
 * @param operand The number to add to each 
 */
void sub(double arr[], double operand) {
    for(int i = 0; i < SIZE; i++) {
        arr[i] -= operand;
    }
}

/**
 * Multiplies each item in an array by the operand and stores it in the item's
 * position replacing the original value.
 * 
 * @param arr The array to use
 * @param operand The number to add to each 
 */
void mult(double arr[], double operand) {
    for(int i = 0; i < SIZE; i++) {
        arr[i] *= operand;
    }
}

/**
 * Divides each item in an array by the operand, if it is not zero, and stores
 * it in the item's position replacing the original value.
 * 
 * @param arr The array to use
 * @param operand The number to add to each 
 */
void div(double arr[], double operand) {
    for(int i = 0; i < SIZE; i++) {
        if(operand != 0) {
            arr[i] /= operand;
        }
    }
}

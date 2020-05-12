/**
 * @author  Raul Aguilar
 * @date    May 12, 2020
 * CS 150 Lab 25
 */

#include <iostream>
using namespace std;

const int SIZE = 10;

int seqSearch(const int[], int);

int main() {
    int arr[SIZE] = { 12, -7, 3, 17, 42, 6, 18, -15, 0, 1 };
    int key, index;
    cout << "What value would you like to look for?" << endl;
    cin >> key;
    index = seqSearch(arr, key);

    if(index != -1) {
        cout << key << " was found in index " << index << endl;
    } else {
        cout << key << " was not found" << endl;
    }

    return 0;
}

int seqSearch(const int arr[], int key) {
    for(int i = 0; i < SIZE; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}
/**
 * @author	Raul Aguilar
 * @date	May 15, 2020
 * CS 150 1686 Lab 29
 */
#include <iostream>
#include <string>
#include "PetRecord.h"
#include "DogRecord.h"
#include "BirdRecord.h"
#include "CatRecord.h"

int main() {
    PetRecord* pet = new PetRecord;
    string answer;

    cout << "What kind of pet would you like?" << endl;
    cout << "Type dog, cat, or bird:" << endl;
    getline(cin, answer);

    if (answer == "dog") {
        pet = new DogRecord;
    } else if (answer == "cat") {
        pet = new CatRecord;
    } else {
        pet = new BirdRecord;
    }

    pet->print();

    delete pet;
	
	return 0;
}

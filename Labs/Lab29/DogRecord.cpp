#include <iostream>
#include "DogRecord.h"

using namespace std;

DogRecord::DogRecord() {
	setName("No name yet.");
	setAge(0);
	setWeight(0.0);
	hasLongHair = NULL;
}

DogRecord::DogRecord(string name, int age, double weight, bool longHairs) {
	setName(name);
	setAge(age);
	setWeight(weight);
	hasLongHair = longHairs;
}

void DogRecord::setHasLongHair(bool longHair) {
	hasLongHair = longHair;
}

bool DogRecord::getHasLongHair() {
	return hasLongHair;
}

void DogRecord::print() {
	cout << "Name: " << getName() << "\nAge: " << getAge() << " years"
		<< "\nWeight: " << getWeight() << " pounds";
	if(getHasLongHair()) {
		cout << "\nLong hair: true" << endl;
	} else {
		cout << "\nLong hair: false" << endl;
	}
}

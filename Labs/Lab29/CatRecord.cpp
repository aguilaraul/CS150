#include <iostream>
#include "CatRecord.h"

using namespace std;

CatRecord::CatRecord() {
	setName("No name yet.");
	setAge(0);
	setWeight(0.0);
	hasLongHair = NULL;
}

CatRecord::CatRecord(string name, int age, double weight, bool longHairs) {
	setName(name);
	setAge(age);
	setWeight(weight);
	hasLongHair = longHairs;
}

void CatRecord::setHasLongHair(bool longHair) {
	hasLongHair = longHair;
}

bool CatRecord::getHasLongHair() {
	return hasLongHair;
}

void CatRecord::print() {
	cout << "Name: " << getName() << "\nAge: " << getAge() << " years"
		<< "\nWeight: " << getWeight() << " pounds";
	if (getHasLongHair()) {
		cout << "\nLong hair: true" << endl;
	} else {
		cout << "\nLong hair: false" << endl;
	}
}
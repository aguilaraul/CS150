#include <iostream>
#include "BirdRecord.h"

using namespace std;

BirdRecord::BirdRecord() {
	setName("No name yet.");
	setAge(0);
	setWeight(0.0);
	numFeathers = 0;
}

BirdRecord::BirdRecord(string name, int age, double weight, int feathers) {
	setName(name);
	setAge(age);
	setWeight(weight);
	numFeathers = feathers;
}

void BirdRecord::setNumFeathers(int feathers) {
	numFeathers = feathers;
}

int BirdRecord::getNumFeathers() {
	return numFeathers;
}

void BirdRecord::print() {
	cout << "Name: " << getName() << "\nAge: " << getAge() << " years"
		<< "\nWeight: " << getWeight() << " pounds"
		<< "\nNumber of feathers: " << getNumFeathers();
}
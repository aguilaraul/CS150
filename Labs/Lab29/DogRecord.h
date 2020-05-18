#ifndef DOGRECORD_H
#define DOGRECORD_H

#include "PetRecord.h"

class DogRecord: public PetRecord {
	protected:
		bool hasLongHair;
	public:
		DogRecord();
		DogRecord(string, int, double, bool);
		
		void setHasLongHair(bool);
		
		bool getHasLongHair();

		void print();
};

#endif

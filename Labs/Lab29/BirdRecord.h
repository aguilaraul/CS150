#ifndef BIRDRECORD_H
#define BIRDRECORD_H

#include "PetRecord.h"

class BirdRecord: public PetRecord {
	protected:
		int numFeathers;
	public:
		BirdRecord();
		BirdRecord(string, int, double, int);
		
		void setNumFeathers(int);
		
		int getNumFeathers();

		void print();
};

#endif

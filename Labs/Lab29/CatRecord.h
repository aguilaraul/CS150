#ifndef CATRECORD_H
#define CATRECORD_H

#include "PetRecord.h"

class CatRecord: public PetRecord {
	protected:
		bool hasLongHair;
	public:
		CatRecord();
		CatRecord(string, int, double, bool);
		
		void setHasLongHair(bool);
		
		bool getHasLongHair();

		void print();
};

#endif

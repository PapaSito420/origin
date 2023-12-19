#pragma once 	

#include <string>
#include <iostream>
#include "Race.h"
#include "vihicle.h"

class Race {

protected:
	Vihicle** racer;
	int racerCount;
	int racerCapacity;

public:
	Race(int capacity ) : racerCount(0), racerCapacity(capacity) {
			racer = new Vihicle * [capacity]; 
	}

	virtual void recerRegistr (Vihicle* vihicle) =0;
	virtual void start() const =0 ;
	virtual ~Race() {
		for (int i = 0; i < racerCount; ++i) {
			delete racer[i]; 
		}
		delete[] racer;  
	}
};
	
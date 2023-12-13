#pragma once 	

#ifndef RACELIB_EXPORTS
#define RACELIB_API __declspec(dllexport)
#else
	#define RACELIB_API __declspec(dllimport)
#endif
#include <string>
#include <iostream>
#include "Race.h"
#include "vihicle.h"

class RACELIB_API Race {

protected:
	Vihicle** racer;
	int racerCount;
	int racerCapacity;

public:
	Race(int capacity , int rCnt) : racerCount(rCnt), racerCapacity(capacity) {
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
	
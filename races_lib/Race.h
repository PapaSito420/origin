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

class __declspec(dllexport) Race{

protected: 
	Vihicle** racer;
	int racerCount;
	int raceCapacity 

public:
    Race(int capacity): racerCount(0), raceCapacity(capacity) {}
	
	virtual void recerRegistr (Vihicle* vihicle) = 0 ;
	virtual void start() = 0; 
	virtual ~Race(){}
}
	
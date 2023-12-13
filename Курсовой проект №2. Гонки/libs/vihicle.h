#pragma once 	
#ifndef VIHICLELIB_EXPORTS
#define VIHICLELIB_API __declspec(dllexport)
#else
	#define VIHICLELIB_API __declspec(dllimport)
#endif
#include <string>
#include <iostream>

enum class  VihicleType {
	Land,
	Air,
	Mix
   
};

class VIHICLELIB_API Vihicle{
	
	public:

	   virtual double calculating(double distance, double speed) const = 0;
	   virtual VihicleType getType() const = 0;
	   virtual std::string getName() const = 0;
	   virtual void getResults() const = 0;
	   virtual ~Vihicle(){};
};


	   
	  

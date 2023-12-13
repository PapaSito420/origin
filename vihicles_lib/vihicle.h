#pragma once 	
#ifndef VIHICLELIB_EXPORTS
#define VIHICLELIB_API __declspec(dllexport)
#else
	#define VIHICLELIB_API __declspec(dllimport)
#endif
#include <string>
#include <iostream>

enum class VihicleType { 
    Land; 
	Air; 
	Mix;
}

class __declspec(dllexport) Vihicle{
	
	public:

	   virtual double calculating () override = 0;
	   virtual std::string getName() override =0;
	   virtual VihicleType getType() override = 0;
	   
	   virtual ~Vihicle(){};
};


	   
	  

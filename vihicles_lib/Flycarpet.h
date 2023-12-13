#include "Airvihicle.h"
#include<string> 

class Flycarpet: public AirVihicle {
	public:
	Flycarpet(): 
	    AirVehicle(10,"Flycarpet")
    
	virtual double calculating(double distance) const override ;
};


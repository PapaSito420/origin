#include "Airvihicle.h"
#include<string> 

class Flycarpet: public AirVehicle {
	public:
		Flycarpet() :
			AirVehicle(10, "Flycarpet") {}
    
	virtual double calculating(double distance, double speed) const override ;
};


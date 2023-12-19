#include "Airvihicle.h"
#include<string> 

class Flycarpet: public AirVehicle {
	public:
		Flycarpet() :
			AirVehicle(10, "Flycarpet", 0.0) {}
    
	virtual double calculating(double distance) const override ;
	virtual void getResults(double distance) const override;
	virtual std::string getName() const override {return name;}
};


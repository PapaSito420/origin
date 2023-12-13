#pragma once
#include "Vehicle.h"
#include <string>

class LandVehicle : public Vehicle {
protected:
    double speed;
    std::string name;
	
    double firstRestDuration;
	  double secondRestDuration;
        double subsequentRestDuration;
	

public:
    LandVehicle(double spd, const std::string& nm, double firstRest, double secondRest, double subsequentRest  )
        : speed(spd), name(nm), firstRestDuration(firstRest),secondRestDuration(secondRest), subsequentRestDuration(subsequentRest) {}

    virtual std::string getName() const override ;
    virtual double calculating(double distance) const override;
    Vihicle getType () const override;
};
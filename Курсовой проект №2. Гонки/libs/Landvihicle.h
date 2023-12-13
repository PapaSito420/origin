#pragma once
#include "Vihicle.h"
#include <string>

class LandVehicle : public Vihicle {
protected:
    double speed;
    std::string name;
	
    double firstRestDuration;
	  double secondRestDuration;
        double subsequentRestDuration;
	

public:
    LandVehicle(double spd, const std::string& nm, double firstRest, double secondRest, double subsequentRest  )
        : speed(spd), name(nm), firstRestDuration(firstRest),secondRestDuration(secondRest), subsequentRestDuration(subsequentRest) {}

    virtual std::string getName() const =0  ;
    virtual double calculating(double distance, double speed) const = 0;
    virtual VihicleType getType () const =0;
    virtual void getResults() const = 0;
};
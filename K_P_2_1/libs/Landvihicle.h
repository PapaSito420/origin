#pragma once
#include "Vihicle.h"
#include <string>
#include <iostream>

class LandVehicle : public Vihicle {
protected:
   
	
    double firstRestDuration;
	  double secondRestDuration;
        double subsequentRestDuration;
	

public:
    LandVehicle(double spd, const std::string& nm, double firstRest, double secondRest, double subsequentRest  )
        :Vihicle(spd, nm),firstRestDuration(firstRest),secondRestDuration(secondRest), subsequentRestDuration(subsequentRest) {}

      
    virtual double calculating(double distance) const = 0;
    VihicleType getType() const override { return VihicleType::Land; }
    virtual void getResults(double distance) const = 0;
};
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
        :Vihicle(spd, nm),firstRestDuration(firstRest),secondRestDuration(secondRest), subsequentRestDuration(subsequentRest) {}

    virtual std::string getName() const =0  ;
    virtual double calculating(double distance) const = 0;
    virtual VihicleType getType () const override;
    virtual void getResults(double distance) const = 0;
};
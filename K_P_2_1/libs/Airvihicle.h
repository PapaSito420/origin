#pragma once
#include "vihicle.h"
#include <string>

class AirVehicle : public Vihicle {
protected:
    double speed;
    double distanceReductionFactor;
	std::string name;
	

public:
    AirVehicle(double spd, const std::string& nm,  double distanceReduction  )
        : Vihicle(spd, nm),  distanceReductionFactor( distanceReduction) {}

    virtual double calculating(double distance ) const  = 0;
    VihicleType getType() const ;
    virtual std::string getName() const override;
    virtual void getResults(double distance) const = 0;
};
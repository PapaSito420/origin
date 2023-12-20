#pragma once
#include "vihicle.h"
#include <string>

class AirVehicle : public Vihicle {


public:
    AirVehicle(double spd, const std::string& nm,  double distanceReduction  )
        : Vihicle(spd, nm),  distanceReductionFactor( distanceReduction) {}

    virtual double calculating(double distance ) const  = 0;
    VihicleType getType() const override ;
    virtual void getResults(double distance) const = 0;
protected:
    double distanceReductionFactor;
};
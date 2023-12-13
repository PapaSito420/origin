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
        : speed(spd), name(nm),  distanceReductionFactor( distanceReduction) {}

    virtual double calculating(double distance , double speed) const = 0;
    virtual VihicleType getType() const override { return VihicleType::Air; }
    virtual std::string getName() const = 0;
};
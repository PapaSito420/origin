#pragma once
#include "Vehicle.h"
#include <string>

class AirVehicle : public Vehicle {
protected:
    double speed;
    double distanceReductionFactor;
	std::string name;
	

public:
    AirVehicle(double spd, const std::string& nm,  double distanceReduction  )
        : speed(spd), name(nm), double distanceReductionFactor( distanceReduction) {}

    virtual std::string getName() const override { return name; } // нужен или нет ? мы же передаем имя в конструктор.... 
    virtual double calculating(double distance) const override = 0;
    virtual VihicleType getTape() const override = 0 ; 
};
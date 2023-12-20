#pragma once
#include "Landvihicle.h"

class Centaur : public LandVehicle {

public:
    Centaur()
        : LandVehicle(15, "Centaur", 2, 2 ,2) {}

    virtual double calculating(double distance ) const override;
    virtual void getResults(double distance) const override;
    virtual std::string getName() const override { return "Centaur"; };
};
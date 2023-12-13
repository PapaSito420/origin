#pragma once
#include "Landvihicle.h"

class fastCamel : public LandVehicle {

public:
    fastCamel()
        : LandVehicle(6, "Centaur", 10, 5 ,5) {}

    virtual double calculating(double distance, double speed) const override;
    virtual void getResults() const override;
};
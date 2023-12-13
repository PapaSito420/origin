#pragma once
#include "Landvihicle.h"

class fastCamel : public LandVehicle {

public:
    fastCamel()
        : LandVehicle(15, "Centaur", 2, 2 ,2) {}

    virtual double calculating(double distance, double speed) const override;
};
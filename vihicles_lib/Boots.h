##pragma once
#include "LandVehicle.h"

class fastCamel : public LandVehicle {

public:
    fastCamel()
        : LandVehicle(6, "Centaur", 10, 5 ,5) {}

    virtual double calculating(double distance) const override;
};
##pragma once
#include "LandVehicle.h"

class Camel : public LandVehicle {

public:
    Camel()
        : LandVehicle(10, "Camel", 5, 8,8) {}

    virtual double calculating(double distance) const override;
};
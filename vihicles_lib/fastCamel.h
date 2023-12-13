##pragma once
#include "LandVehicle.h"

class fastCamel : public LandVehicle {

public:
    fastCamel()
        : LandVehicle(40, "race Camel", 5, 6.5 ,8) {}

    virtual double calculating(double distance) const override;
};
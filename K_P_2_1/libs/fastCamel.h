#pragma once
#include "Landvihicle.h"

class fastCamel : public LandVehicle {

public:
    fastCamel()
        : LandVehicle(40, "race Camel", 5, 6.5 ,8) {}

    virtual double calculating(double distance) const override;
    virtual void getResults(double distance) const override;
    virtual std::string getName() const override {return name;}
};
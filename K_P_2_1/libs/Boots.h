#pragma once
#include "Landvihicle.h"

class Boots : public LandVehicle {

public:
    Boots()
        : LandVehicle(6, "Magic boots", 10, 5 ,5) {}

    virtual double calculating(double distance) const override;
    virtual void getResults(double distance) const override;
    virtual std::string getName() const override { return "Magic boots"; }
    

};
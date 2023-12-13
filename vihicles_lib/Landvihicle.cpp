#include "Landvihicle.h"

  
 double calculating(double distance) const override = 0;
 std::string getName() const override { return name; }

 VihicleType getTape() const override {return VihicleType::Land;}
#include "Airvihicle.h" 


class Broom: public AirVehicle {
	Broom() :
		AirVehicle(20, "Broom", 0.0) {}

	virtual std::string getName() const override {
		return name;
	}
		virtual double calculating(double distance, double speed) const override {

	        }
		
};


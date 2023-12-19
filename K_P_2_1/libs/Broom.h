#include "Airvihicle.h" 


class Broom: public AirVehicle {
	
	public:
	Broom::Broom() :
		AirVehicle(spd, nm, distanceReduction) {}

	
	virtual std::string getName() const override {return name;}
	virtual double calculating(double distance) const override;
    virtual void getResults(double distance) const override;


private:
	double distanceReduction = 0.06;
	double spd = 20.00;
	std::string nm = "Broom";

};


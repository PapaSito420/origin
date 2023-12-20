#include "Airvihicle.h" 
#include <string>

class Broom: public AirVehicle {
	
	public:
	Broom() :
		AirVehicle(20.00,"Broom", 0.06) {}

	
	virtual std::string getName() const override {return name;}
	virtual double calculating(double distance) const override;
    virtual void getResults(double distance) const override;



};


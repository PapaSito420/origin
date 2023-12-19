#include "Airvihicle.h"
#include <string>

class Eagle: public AirVehicle {
	
	public: 
		Eagle() :
			AirVehicle(8.0, "Eagle", 0.06) {}
		  
   virtual double calculating (double distance ) const override ;
   virtual void getResults(double distance) const override;
   virtual std::string getName() const override {return name;}
};
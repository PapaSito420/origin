#include "Airvihicle.h"
#include <string>

class Eagle: public AirVehicle {
	
	public: 
		Eagle() :
			AirVehicle(8, "Eagle", 0.06) {}
		  
   virtual double calculating (double distance ,double speed) const override ;
};
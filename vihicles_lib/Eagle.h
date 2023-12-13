#include " Airvihicle.h"
#include <string>

class Eagle: public AirVihicle {
	
	public: 
	Eagle(): 
	      AirVihicle(8 , "Eagle") 
		  
   virtual double calculating (double distance) const override ;
};
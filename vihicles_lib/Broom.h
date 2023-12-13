#include "Airvihicle.h" 


class Broom: public AirVihicle {
	Broom(): 
	      AirVihicle(20 , "Broom")
		  
    virtual void calculating (double distance) const override ; 
};


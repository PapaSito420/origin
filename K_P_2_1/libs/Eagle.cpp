#include "Eagle.h"

  double Eagle:: calculating (double distance) const {
	  
	  double actualDistance = 0.06;  
	  
	  double reducedDistance = distance * (1 - actualDistance); 
	  return reducedDistance/ this -> speed; 
	  
  }
	  
  void Eagle::getResults(double distance) const { 
    double time = this->calculating(distance);
    std::cout<< "Eagle. TIME: " << time<< std::endl;
}
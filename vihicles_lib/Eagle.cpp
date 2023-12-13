#include "Eagle.h"

  double calculatinge (double distance) const {
	  
	  double actualDistance = 0.06;  
	  
	  double reducedDistance = distance * (1 - actualDistance); 
	  return reducedDistance/speed; 
	  
  }
	  
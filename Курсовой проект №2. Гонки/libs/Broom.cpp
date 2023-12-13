#include "Broom.h" 

double calculating (double distance, double speed) {
	double distanceReduction  = (distance / 1000.0)*0.01;
	double reducedDistance = distance * (1 - distanceReduction); 
	
	return reducedDistance/ speed; 
}
 
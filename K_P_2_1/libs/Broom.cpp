#include "Broom.h" 

double Broom:: calculating (double distance) const  {
	double distanceReduction = (distance / 1000.0) * 0.01;
	double reducedDistance = distance * (1 - distanceReduction); 
	
	return reducedDistance/  speed; 
}
void Broom::getResults(double distance) const { 
    double time = this->calculating(distance);
    std::cout<< "Broom. TIME: " << time<< std::endl;
}
 
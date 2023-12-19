#include "Flycarpet.h"
#include <string>

double Flycarpet::calculating(double distance) const{
	double actualDistance; 
	double distanceReduction;
	
	if ( distance < 1000 ) {
          distanceReduction = 0; 
	} else if( distance <5000 ) {
		distanceReduction = 0.03; 
	} else if( distance<10000){
	     distanceReduction = 0.1; 
	} else { distanceReduction = 0.05; }
	
	double reducedDistance =  distance * ( 1- distanceReduction); 
	return reducedDistance /this-> speed ;
}

void Flycarpet::getResults(double distance) const { 
    double time = this->calculating(distance);
    std::cout<< "Fly carpet. TIME: " << time<< std::endl;
}
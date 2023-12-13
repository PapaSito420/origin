#include "Flycarpet.h"
#include <string>

double Flycarpet::calculating(double distance) const{
	double actualDistance 
	
	if ( distance < 1000 ) {
         distanceReduction = 0; 
	} elseif( distance <5000 ) {
		distanceReduction = 0.03; 
	} elseif( distance<10000){
	     distanceReduction = 0.1; 
	} else { distanceReduction = 0.05; }
	
	double reducedDistance =  distance * ( 1- distanceReduction); 
	return reducedDistance /speed ;
}
#include "LandRace.h"
#include "Landvihicle.h"



void LandRace::recerRegistr(Vihicle* vihicle) {

	if (vihicle->getType() == VihicleType::Land && racerCount < racerCapacity) {
		racer[racerCount++] = vihicle;
	}
	else {
		std::cout << "This vehicle cannot participate in an LAND Race." << std::endl;
	}
}



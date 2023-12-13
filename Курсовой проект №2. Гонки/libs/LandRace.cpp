#include "LandRace.h"

    void LandRace:: recerRegistr (Vihicle* vihicle){
		if (vihicle->getType() == VihicleType::Land && racerCount < racerCapacity) {
			racer[racerCount++] = vihicle;
		    } 
		}
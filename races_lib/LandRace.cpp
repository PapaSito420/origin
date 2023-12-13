#include "LandRace.h"

    void racerRegistr (Vihicle* vihicle) override {
			
		if(vihicle->getType() ==VihicleType::Land && racerCount<racerCapacity){
			racer[racerCount++] = vihicle;
		}
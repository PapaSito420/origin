#include "MixRace.h"

    void racerRegistr (Vihicle* vihicle) override {
			
		if(vihicle->getType() ==VihicleType::Land ||VihicleType::Air && racerCount<racerCapacity){
			racer[racerCount++] = vihicle;
		}
		
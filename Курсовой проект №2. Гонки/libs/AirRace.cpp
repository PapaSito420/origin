#include "AirRace.h"

void AirRace::recerRegistr(Vihicle* vihicle) {

	if (vihicle->getType() == VihicleType::Land && racerCount < racerCapacity) {
		racer[racerCount++] = vihicle;
	}
}
		
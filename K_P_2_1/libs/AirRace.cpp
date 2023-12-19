#include "AirRace.h"
#include "Airvihicle.h"

void AirRace::recerRegistr(Vihicle* vihicle) {

	if (vihicle->getType() == VihicleType::Air && racerCount < racerCapacity) {
		racer[racerCount++] = vihicle;
	}else {
        std::cout << "This vehicle cannot participate in an Air Race." << std::endl;
    }
}

void AirRace::start() const {
	std::cout << "Starting Air Race with " << racerCount << " racers!" << std::endl;
}
		
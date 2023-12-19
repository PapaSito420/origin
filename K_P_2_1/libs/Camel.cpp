#include "Camel.h"

double Camel::calculating(double distance ) const {
    double time = 0;
    double distanceCovered = 0;
    double restTime = 0;

    while (distanceCovered < distance) {
        if (distanceCovered == 0) {
            // The first rest duration
            restTime = this->firstRestDuration;
        } else {
            // The subsequent rest durations
            restTime = this->subsequentRestDuration;
        }

        if (distance - distanceCovered <= speed * 30) {
            // If the remaining distance is less than what camel can travel before resting
            time += (distance - distanceCovered) / this->speed;
            break;
        } else {
            time += 30 + restTime; // Travel for 30 hours, then rest
            distanceCovered += this->speed * 30;
        }
    }

    return time;
}

void Camel::getResults(double distance) const { 
    double time = this->calculating(distance);
    std::cout<< "Camel. TIME: " << time<< std::endl;
}

#include "fastCamel.h"

double fastCamel::calculating(double distance) const {
    double time = 0;
    double distanceCovered = 0;
    double restTime = 0;

    while (distanceCovered < distance) {
        if (distanceCovered == 0) {

            restTime = this->firstRestDuration;
        } else {

            restTime = this->subsequentRestDuration;
        }

        if (distance - distanceCovered <= this->speed * 10) {   // цифрой указана характеристика-  "Время движения до отдыха"

            time += (distance - distanceCovered) / this->speed;
            break;
        } else {
            time += 10 + restTime;
            distanceCovered += this -> speed * 10;
        }
    }

    return time;
}

void fastCamel::getResults(double distance) const { 
    double time = this->calculating(distance);
    std::cout<< "Fast Camel. TIME: " << time<< std::endl;
}
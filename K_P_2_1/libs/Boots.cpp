#include "Boots.h"

double Boots::calculating(double distance) const {
    double time = 0;
    double distanceCovered = 0;
    double restTime = 0;

    while (distanceCovered < distance) {
        if (distanceCovered == 0) {
            restTime = this->firstRestDuration;
        } else {
    
            restTime = this->subsequentRestDuration;
        }

        if (distance - distanceCovered <= this->speed * 60) {   // цифрой указана характеристика-  "Время движения до отдыха"
            
            time += (distance - distanceCovered) /this-> speed;
            break;
        } else {
            time += 60 + restTime; 
            distanceCovered += this->speed * 60;
        }
    }

    return time;
}

void Boots::getResults(double distance) const { 
    double time = this->calculating(distance);
    std::cout<< "Magic Boots. TIME: " << time<< std::endl;
}



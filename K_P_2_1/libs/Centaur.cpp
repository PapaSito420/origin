#include "Centaur.h"

double Centaur::calculating(double distance) const {
    double time = 0;
    double distanceCovered = 0;
    double restTime = 0;

    while (distanceCovered < distance) {
        distanceCovered = 0;
            restTime = this->firstRestDuration;
       

        if (distance - distanceCovered <= this->speed * 8) {   // цифрой указана характеристика-  "Время движения до отдыха"
            
            time += (distance - distanceCovered) / this->speed;
            break;
        } else {
            time += 8 + restTime; 
            distanceCovered += this->speed * 8;
        }
    }

    return time;
}

void Centaur::getResults(double distance) const { 
    double time = this->calculating(distance);
    std::cout<< "Centaur. TIME: " << time<< std::endl;
}


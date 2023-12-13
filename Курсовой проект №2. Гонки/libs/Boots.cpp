#include "Boots.h"

double fastCamel::calculating(double distance, double speed) const {
    double time = 0;
    double distanceCovered = 0;
    double restTime = 0;

    while (distanceCovered < distance) {
        if (distanceCovered == 0) {
            restTime = firstRestDuration;
        } else {
    
            restTime = subsequentRestDuration;
        }

        if (distance - distanceCovered <= speed * 60) {   // цифрой указана характеристика-  "Время движения до отдыха"
            
            time += (distance - distanceCovered) / speed;
            break;
        } else {
            time += 60 + restTime; 
            distanceCovered += speed * 60;
        }
    }

    return time;
}


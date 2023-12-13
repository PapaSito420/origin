
#include "fastCamel.h"

double fastCamel::calculating(double distance, double speed) const {
    double time = 0;
    double distanceCovered = 0;
    double restTime = 0;

    while (distanceCovered < distance) {
        if (distanceCovered == 0) {
            // The first rest duration
            restTime = firstRestDuration;
        } else {
            // The subsequent rest durations
            restTime = subsequentRestDuration;
        }

        if (distance - distanceCovered <= speed * 10) {   // цифрой указана характеристика-  "Время движения до отдыха"
            // If the remaining distance is less than what camel can travel before resting
            time += (distance - distanceCovered) / speed;
            break;
        } else {
            time += 10 + restTime; // Travel for 30 hours, then rest
            distanceCovered += speed * 10;
        }
    }

    return time;
}

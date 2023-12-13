#include "MixRace.h"

    void MixRace:: recerRegistr(Vihicle* vihicle)  {
		if (racerCount < racerCapacity) { // ѕросто провер€ем, есть ли место дл€ нового участника.
			racer[racerCount++] = vihicle;
		}
			
		}
		 
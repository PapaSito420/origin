#include "MixRace.h"

    void MixRace:: recerRegistr(Vihicle* vihicle)  {
		if (racerCount < racerCapacity) { // ������ ���������, ���� �� ����� ��� ������ ���������.
			racer[racerCount++] = vihicle;
		}
			
		}
		 
#include "Race.h"

class AirRace: public Race{
public:
	using Race::Race;
	
	virtual void recerRegistr(Vihicle* vihicle) override = 0;
};
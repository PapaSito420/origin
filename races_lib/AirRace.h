#include "Race.h"

class AirRace: public Race{
	public:
	using Race::Race;
	
	virtual void racerRegistr (Vihicle* vihicle) const override ;
};
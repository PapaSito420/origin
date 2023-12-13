#include "Race.h"

class LandRace: public Race{
	public:
	using Race::Race;
	
	virtual void racerRegistr (Vihicle* vihicle) const override ;
};
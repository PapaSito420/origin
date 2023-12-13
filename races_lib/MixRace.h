#include "Race.h"

class MixRace: public Race{
	public:
	using Race::Race;
	
	virtual void racerRegistr (Vihicle* vihicle) const override ;
};
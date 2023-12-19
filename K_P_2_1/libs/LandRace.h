#include "Race.h"

class LandRace: public Race{
	public:
	using Race::Race;
	
	virtual void recerRegistr (Vihicle* vihicle) override;
};
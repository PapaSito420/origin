#include "Race.h"

class LandRace: public Race{
	public:
	using Race::Race;
	
	 void recerRegistr (Vihicle* vihicle) override;

};
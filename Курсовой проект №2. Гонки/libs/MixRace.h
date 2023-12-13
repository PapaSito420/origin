#include "Race.h"

class MixRace: public Race{
	public:
	using Race::Race;
	
	virtual void recerRegistr(Vihicle* vihicle) override;
};
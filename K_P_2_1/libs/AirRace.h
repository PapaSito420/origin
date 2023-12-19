#include "Race.h"

class AirRace: public Race{
public:
	using Race::Race;
	
	 void recerRegistr(Vihicle* vihicle)  override;
	 void start() const override;
};
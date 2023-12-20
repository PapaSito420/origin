#pragma once 	

#include <string>
#include <iostream>

enum class  VihicleType {
	Land,
	Air,
	Mix
};


inline std::istream& operator>>(std::istream& in, VihicleType& type ){
	int input; 
	in >> input;
	type = static_cast<VihicleType>(input);
    return in;
    }


inline  bool operator !=(const VihicleType left, const VihicleType right) {
	return static_cast<int>(left) != static_cast<int>(right);
	};



class  Vihicle {
	
	public:
    Vihicle(double spd, std::string nm) : speed(spd), name(nm){}
	   virtual double calculating(double distance)  const =0;
	   virtual VihicleType getType() const = 0;
	   virtual std::string getName() const = 0;
	   virtual void getResults(double distance) const = 0;
	   virtual ~Vihicle(){};

   
protected:
    double speed;
    std::string name;


};


	   
	  

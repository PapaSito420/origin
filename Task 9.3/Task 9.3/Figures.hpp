#ifndef Figures_hpp
#define Figures_hpp
#include <iostream>
#include <string>
#include "defaults.hpp"
using namespace std;

class Figure {
public:
    Figure(){};
    virtual std::string getSides() const = 0;
    virtual std::string getAngles() const = 0 ;
    virtual std::string getName()const = 0;
    virtual void printInfo()const;
    virtual ~Figure() {}
};

#endif // FIGURE_H

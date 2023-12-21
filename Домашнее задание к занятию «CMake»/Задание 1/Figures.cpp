
#include "defaults.hpp"
#include "Figures.hpp"
#include <iostream>

void Figure::printInfo() const {
    std::cout << getName() << std::endl;
    std::cout << getSides() << std::endl;
    std::cout << getAngles() << std::endl;
}

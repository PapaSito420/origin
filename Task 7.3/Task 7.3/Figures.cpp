//
//  Figures.cpp
//  Task 7.3
//
//  Created by Andrey Menshikov on 18.11.2023.
//
#include "Figures.hpp"
#include <iostream>

void Figure::printInfo() const {
    std::cout << getName() << std::endl;
    std::cout << getSides() << std::endl;
    std::cout << getAngles() << std::endl;
}

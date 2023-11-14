//
//  Figures.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 13.11.2023.
//

#include "Figures.hpp"
#include <iostream>

void Figure::printInfo() const {
    std::cout << getName() << std::endl;
    std::cout << getSides() << std::endl;
    std::cout << getAngles() << std::endl;
}

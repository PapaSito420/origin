//
//  r_Triangle.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#include "r_Triangle.hpp"
#include <cmath>




r_Triangle::r_Triangle(const std::string &name, int sideA, int sideB)
        :triangle(name, sideA, sideB, static_cast<int>(sqrt(sideA * sideA + sideB * sideB)), 90, asin(sideA / sqrt(sideA * sideA + sideB * sideB)) * 180 / M_PI, 90) {}
    


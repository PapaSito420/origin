//
//  i_Triangle.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#include "i_Triangle.hpp"
#include <cmath>


i_Triangle::i_Triangle(const std::string &name, int sideA, int sideB) : triangle(name, sideA, sideB, sideB, acos((sideA / 2.0) / sideB) * 180 / M_PI, sideA, acos((sideA / 2.0) / sideB) * 180 / M_PI) {}

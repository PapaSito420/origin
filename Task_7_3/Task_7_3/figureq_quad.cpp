//
//  figureq_quad.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#include "figureq_quad.hpp"
figureQ::figureQ(const std::string& triangle_name, int sidea, int sideb, int sidec, int sided, int aA, int aB, int aC, int D){}


void figureQ:: printInfo()
  {
    std::cout << getName() <<  std::endl;
    std::cout << getSides() <<  std::endl;
    std::cout << getAngles()<<  std::endl;
  }


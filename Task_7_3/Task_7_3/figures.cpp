//
//  figures.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#include "figures.hpp"
figure::figure(const std::string& name, int sidea, int sideb, int sidec, int aA, int aB, int aC){}
figure::  figure(const std::string& name, int sidea, int sideb, int sidec,int sided , int aA, int aB, int aC, int aD){}

void figure:: printInfo()
  {
    std::cout << getName() <<  std::endl;
    std::cout << getSides() <<  std::endl;
    std::cout << getAngles()<<  std::endl;
  }


//
//  triangle.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 13.11.2023.
//

#include "triangle.hpp"


Triangle::Triangle(const string& name,int aa, int bb, int cc, int AA,int BB, int CC): sideA(aa), sideB(bb), sideC(cc), angA(AA),angB(BB), angC(CC),T_name(name){}


std::string Triangle:: getSides() const {return "Sides: a= " + std::to_string(sideA) + " b= " + std::to_string(sideB) + " c= " + std::to_string(sideC);
    
}
std::string Triangle::getAngles() const { return "Angles: A= " +to_string(angA) + " B= " + to_string(angB) + " C= " + to_string(angC) ;
    
}

string Triangle::getName() const {return T_name;}

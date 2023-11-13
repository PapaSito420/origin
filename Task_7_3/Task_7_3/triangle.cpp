//
//  triangle.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#include "triangle.hpp"




triangle::triangle(const std::string& triangle_name, int sidea, int sideb, int sidec, int aA, int aB, int aC)
    :figure(triangle_name, sidea, sideb, sidec, aA, aB, aC), T_name(triangle_name), a(sidea), b(sideb), c(sidec), A(aA), B(aB), C(aC) {
}
    
std::string triangle::getName() const  {
        return T_name;
    }
    
std::string  triangle::getSides() const  {
        return "Sides: a="+ std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) ;
    }
    
std::string triangle::getAngles() const  {
        return "Angles: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) ;
        
    }

//
//  quadrilateral.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 13.11.2023.
//

#include "quadrilateral.hpp"

Quad::Quad(const string& name,int a, int b, int c, int d, int A, int B, int C, int D): sA(a),sB(b),sC(c),sD(d),aA(A),aB(B),aC(C),aD(D), Q_name(name){}

std::string Quad:: getSides() const {return "Sides: a= " + std::to_string(sA) + " b= " + std::to_string(sB) + " c= " + std::to_string(sC) +" d= " + std::to_string(sD);
    
}
std::string Quad::getAngles() const { return "Angles: A= " +to_string(aA) + " B= " + to_string(aB) + " C= " + to_string(aC)+ " D= "+ to_string(aD) ;
    
}
string Quad::getName() const {return Q_name;}

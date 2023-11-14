//
//  Rectangle.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//



#include "Rectangle.hpp"


Rectangle::Rectangle (const std::string& square_name, int sidea, int sideb, int sidec,int sided, int aA, int aB, int aC, int aD):figure (square_name,sidea,sideb,sidec,sided,90,90,90,90), Q_name (square_name), a(sidea), b(sideb), c(sidec), d(sided), A(aA), B(aB), C(aC), D(aD){}
    
std::string Rectangle::getName()const {
        return Q_name;
    }
    
    std:: string Rectangle::getSides() const  {
        return "Sides: a= " +std::to_string(a) + " b= " + std::to_string(b) + " c= " + std::to_string(c) +" d= " + std::to_string(d);
    }
    
    std::  string Rectangle::getAngles() const  {
        return "Angles: A= " +std::to_string(A) + " B= " + std::to_string(B) + " C= " + std::to_string(C)+ " D= "+ std::to_string(D) ;
        
    }

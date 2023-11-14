//
//  Rectangle.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "figures.hpp"
#include <iostream>
#include <stdio.h>


class Rectangle:public figure{
protected:
    int a,b,c,d;
    int A,B,C,D;
    std:: string Q_name;
    
public:
    Rectangle (const std::string& square_name, int sidea, int sideb, int sidec,int sided, int aA, int aB, int aC, int aD);
    
     std:: string getSides() const ;
     std:: string getAngles() const ;
     std:: string getName()  const ;
    
};


#endif /* Rectangle_hpp */

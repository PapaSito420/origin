//
//  figureq_quad.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#ifndef figureq_quad_hpp
#define figureq_quad_hpp
#include <iostream>
#include <stdio.h>

class figureQ{
public:
    figureQ(const std::string& triangle_name, int sidea, int sideb, int sidec,int sided , int aA, int aB, int aC, int aD);
    
    virtual std:: string getSides() const = 0;
    virtual std:: string getAngles() const = 0;
    virtual std:: string getName()  const = 0;
    virtual void  printInfo();
};






#endif /* figureq_quad_hpp */

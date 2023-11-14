//
//  quad.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#ifndef quad_hpp
#define quad_hpp
#include <iostream>
#include <stdio.h>

class quad: figureQ{

public:
    figure(const std::string& triangle_name, int sidea, int sideb, int sidec,int sided,  int aA, int aB, int aC, int aD);
    virtual std:: string getSides() const = 0;
    virtual std:: string getAngles() const = 0;
    virtual std:: string getName()  const = 0;
    
    virtual void printInfo();
    
};
#endif /* quad_hpp */

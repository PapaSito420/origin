//
//  quad.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#ifndef quad_hpp
#define quad_hpp
#include "figures.hpp"
#include <stdio.h>
class quad : figureQ {
    
protected:
    int a,b,c,d;
    int A,B,C,D;
    std::string Q_name;
    
public:
    quad (const std::string& square_name, int sidea, int sideb, int sidec, int sided, int aA, int aB, int aC, int aD);
    
    std:: string getSides() const = 0;
    std:: string getAngles() const = 0;
    std:: string getName()  const = 0;
};
    
#endif /* quad_hpp */

//
//  triangle.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#ifndef triangle_hpp
#define triangle_hpp
#include "figures.hpp"
#include <stdio.h>

class triangle:figure{
protected:
    int a,b,c;
    int A,B,C;
    std:: string T_name;
    
public:
    triangle(const std::string& triangle_name, int sidea, int sideb, int sidec, int aA, int aB, int aC);
    
     std:: string getSides() const = 0;
     std:: string getAngles() const = 0;
     std:: string getName()  const = 0;
    
};


#endif /* triangle_hpp */

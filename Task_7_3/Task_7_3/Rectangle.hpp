//
//  Rectangle.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "figures.hpp"
#include <stdio.h>

class Rectangle : figure{
protected:
    int a,b,c,d;
    int A,B,C,D;
    std::string Q_name;
public:
    Rectangle(const std::string& name, int sidea, int sideb,int sidec, int sided);
    
     std:: string getSides() const = 0;
     std:: string getAngles() const = 0;
     std:: string getName()  const = 0;
    
      
};


#endif /* Rectangle_hpp */

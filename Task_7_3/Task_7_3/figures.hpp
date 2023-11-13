//
//  figures.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#ifndef figures_hpp
#define figures_hpp
#include <iostream>
#include <stdio.h>

class figure {

public:
    figure(const std::string& triangle_name, int sidea, int sideb, int sidec, int aA, int aB, int aC);
    virtual std:: string getSides() const = 0;
    virtual std:: string getAngles() const = 0;
    virtual std:: string getName()  const = 0;
    
    virtual void printInfo();
    
};

#endif /* figures_hpp */

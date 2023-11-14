//
//  Figures.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 13.11.2023.
//

#ifndef Figures_hpp
#define Figures_hpp
#include <iostream>
#include <string>

using namespace std;

class Figure {
public:
    Figure();
    virtual std::string getSides() const = 0;
    virtual std::string getAngles() const = 0 ;
    virtual std::string getName()const = 0;
    virtual void printInfo()const;
    virtual ~Figure() {}
};

#endif // FIGURE_H

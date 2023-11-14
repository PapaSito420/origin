//
//  i_Triangle.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 13.11.2023.
//

#ifndef i_Triangle_hpp
#define i_Triangle_hpp
#include "triangle.hpp"
#include <stdio.h>
#include <cmath>

class i_Triangle : public Triangle {
public:
    i_Triangle(const string &name, int sideA, int sideB);
    string getName () const override; 
};



#endif /* i_Triangle_hpp */

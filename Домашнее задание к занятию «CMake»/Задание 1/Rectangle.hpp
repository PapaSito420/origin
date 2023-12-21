

#ifndef Rectangle_hpp
#define Rectangle_hpp
#include "quadrilateral.hpp"
#include <stdio.h>
#include <cmath>

class Rectangle : public Quad {
public:
    Rectangle(const string& name, int a, int b, int c ,int d, int A, int B , int C, int D);
    
};
#endif /* Rectangle_hpp */

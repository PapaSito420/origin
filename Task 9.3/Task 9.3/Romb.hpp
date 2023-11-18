//
//  Romb.hpp
//  Task_9_2
//
//  Created by Andrey Menshikov on 18.11.2023.
//

#ifndef Romb_hpp
#define Romb_hpp
#include "quadrilateral.hpp"
#include <stdio.h>

class Romb : public Quad {
public:
    Romb (const string& name, int a, int b, int c ,int d, int A, int B , int C, int D);
};




#endif /* Romb_hpp */

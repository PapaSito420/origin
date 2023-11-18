//
//  Parallelogram.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 13.11.2023.
//

#ifndef Parallelogram_hpp
#define Parallelogram_hpp
#include "quadrilateral.hpp"
#include <stdio.h>


class Parr: public Quad {
public:
    Parr( const string& name, int a, int b ,int A, int B);
};

#endif /* Parallelogram_hpp */

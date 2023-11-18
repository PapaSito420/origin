//
//  triangle.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 13.11.2023.
//

#ifndef triangle_hpp
#define triangle_hpp
#include <stdio.h>
#include "Figures.hpp"

class Triangle : public Figure {
protected:
    
    int sideA,sideB,sideC;
    int angA,angB,angC;
    string T_name;
    
public:
    Triangle ( const string& name , int a,int b, int c, int A, int B, int C);
    
    string getSides() const override;
    string getAngles() const override;
    string getName() const override;

    
};


#endif /* triangle_hpp */

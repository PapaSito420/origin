//
//  quadrilateral.hpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 13.11.2023.
//

#ifndef quadrilateral_hpp
#define quadrilateral_hpp

#include <stdio.h>
#include "Figures.hpp"

class Quad : public Figure {
protected :
    int sA,sB,sC,sD;
    int aA,aB,aC,aD;
    string Q_name;
    
public:
    Quad (const string& name,int a, int b, int c, int d, int A, int B, int C, int D);
    
    std::string getSides() const override;
    std::string getAngles() const override;
    string getName() const override;
    
    
};


#endif /* quadrilateral_hpp */

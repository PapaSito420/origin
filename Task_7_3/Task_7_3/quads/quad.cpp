//
//  quad.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 12.11.2023.
//

#include "figureq_quad.hpp"

quad :: figureQ(const std::string& square_name, int sidea, int sideb, int sidec, int sided, int aA, int aB, int aC, int aD):figure(square_name, sidea, sideb, sidec,sided, aA, aB, aC,aD), Q_name (square_name), a(sidea), b(sideb), c(sidec), d(sided), A(aA), B(aB), C(aC), D(aD){}

//
//  r_Triangle.cpp
//  Task_9_2
//
//  Created by Andrey Menshikov on 18.11.2023.
//
#include "r_Triangle.hpp"
#include <cmath>



r_Triangle::r_Triangle(const string& name, int a, int b, int c , int A, int B , int C): Triangle (name,a, b, c, A, B, C){
    if(name != "Равносторонний треугольник" && C != A && A != B) {
            throw Errors("Ошибка создания равностороннего треугольника: условия не выполнены.");
        }
}


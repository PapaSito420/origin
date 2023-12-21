//
//  Rectangle.cpp
//  Task_9_2
//
//  Created by Andrey Menshikov on 18.11.2023.
//

#include "Rectangle.hpp"

Rectangle::Rectangle(const string& name, int a, int b, int c ,int d, int A, int B , int C, int D): Quad(name,a,b,c,d,A,B,C,D){
    if(name != "Прямоугольник" && c != a && b != d && A != 90 && B != 90 && C != 90) {
            throw Errors("Ошибка создания Прямоугольникa: условия не выполнены.");
        }
}

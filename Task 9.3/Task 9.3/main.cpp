
#include <iostream>
#include <string>
#include "Figures.hpp"
#include "triangle.hpp"
#include "r_Triangle.hpp"
#include "i_Triangle.hpp"
#include "e_Triangle.hpp"
#include "quadrilateral.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Parallelogram.hpp"
#include "Romb.hpp"
#include "defaults.hpp"



int main(){
    r_Triangle rightTriangle("Right Triangle", 3,3,4, 23 ,34,34);
    i_Triangle isoscelesTriangle("Isosceles Triangle", 5, 6,3,4,3,4);
    try{
        e_Triangle equilateralTriangle("Equilateral Triangle", 7, 23,6,4,43,2);
    std::cout << "Треугольник создан успешно" << std::endl;
} catch (const Errors& e) {
    std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl;
}
    Rectangle rectangle("Rectangle", 8, 9,34,34,34,34,34,43);
    Square square("Square", 10,9,34,34,34,34,34,43);
    Parr parallelogram("Parallelogram", 11, 12, 60,45,23,4,3,4);
  

        rightTriangle.printInfo();
        isoscelesTriangle.printInfo();
//        equilateralTriangle.printInfo();
        rectangle.printInfo();
        square.printInfo();
        parallelogram.printInfo();
        

        return 0;


    
        
    }




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




int main(){
    r_Triangle rightTriangle("Right Triangle", 3,2);
    i_Triangle isoscelesTriangle("Isosceles Triangle", 5, 6);
    e_Triangle equilateralTriangle("Equilateral Triangle", 7);
    Rectangle rectangle("Rectangle", 8, 9);
    Square square("Square", 10);
    Parr parallelogram("Parallelogram", 11, 12, 60,45);
  

        rightTriangle.printInfo();
        isoscelesTriangle.printInfo();
        equilateralTriangle.printInfo();
        rectangle.printInfo();
        square.printInfo();
        parallelogram.printInfo();
        

        return 0;


    
        
    }

/*
//  main.cpp
//  Task_7_3
//
//  Created by Andrey Menshikov on 11.11.2023.

 Задача 3. Иерархия классов
 В этом задании вы вынесете иерархию классов в отдельные файлы.
 Возьмите иерархию классов геометрических фигур из предыдущего домашнего задания.
 Разнесите иерархию классов по отдельным файлам, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.
 Обратите внимание на то, что для каждого класса должна быть создана своя пара — заголовочный файл + файл исходного кода.

 Пример работы программы
 Консоль
 Треугольник:
 Стороны: a=10 b=20 c=30
 Углы: A=50 B=60 C=70

 Прямоугольный треугольник:
 Стороны: a=10 b=20 c=30
 Углы: A=50 B=60 C=90

 Равнобедренный треугольник:
 Стороны: a=10 b=20 c=10
 Углы: A=50 B=60 C=50

 Равносторонний треугольник:
 Стороны: a=30 b=30 c=30
 Углы: A=60 B=60 C=60

 Четырёхугольник:
 Стороны: a=10 b=20 c=30 d=40
 Углы: A=50 B=60 C=70 D=80

 Прямоугольник:
 Стороны: a=10 b=20 c=10 d=20
 Углы: A=90 B=90 C=90 D=90

 Квадрат:
 Стороны: a=20 b=20 c=20 d=20
 Углы: A=90 B=90 C=90 D=90

 Параллелограмм:
 Стороны: a=20 b=30 c=20 d=30
 Углы: A=30 B=40 C=30 D=40

 Ромб:
 Стороны: a=30 b=30 c=30 d=30
 Углы: A=30 B=40 C=30 D=40
*/

#include <iostream>
#include <string>
#include "Figures.hpp"
#include "Triangle.hpp"
#include "r_Triangle.hpp"
#include "i_Triangle.hpp"
#include "e_Triangle.hpp"
#include "quadrilateral.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Parallelogram.hpp"
#include "Romb.hpp"

int main(){
        
r_Triangle rightTriangle("Right Triangle", 3, 4,3,4,4);
i_Triangle isoscelesTriangle("Isosceles Triangle", 5, 6);
e_Triangle equilateralTriangle("Equilateral Triangle", 7);
Rectangle rectangle("Rectangle", 8, 9,8,9);
Square square("Square", 10);
Parr parallelogram("Parallelogram", 11, 12, 60,45);
Romb rhombus("Rhombus", 13, 30,45);

    rightTriangle.printInfo();
    isoscelesTriangle.printInfo();
    equilateralTriangle.printInfo();
    rectangle.printInfo();
    square.printInfo();
    parallelogram.printInfo();
    rhombus.printInfo();

    return 0;
    
        
    }




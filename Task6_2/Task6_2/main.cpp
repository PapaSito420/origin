/*
Задача 2. Фигуры. Стороны и углы
В этом задании вы усложните иерархию классов для усложнённой предметной области.

У вас появляется информация о длине сторон и углах ваших фигур, а также несколько более конкретных фигур. Теперь в треугольнике вы должны хранить информацию о длине всех его трёх сторон (a, b, c) и значениях его трёх углов (A, B, C). В четырёхугольнике вы храните информацию о длине его четырёх сторон (a, b, c, d) и значениях его четырёх углов (A, B, C, D).

Также у вас появляются более конкретные фигуры:

прямоугольный треугольник (угол C всегда равен 90);
равнобедренный треугольник (стороны a и c равны, углы A и C равны);
равносторонний треугольник (все стороны равны, все углы равны 60);
прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
квадрат (все стороны равны, все углы равны 90);
параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
ромб (все стороны равны, углы A,C и B,D попарно равны).
Вы должны иметь возможность узнать у каждой фигуры длины её сторон и значения её углов, но извне вы не должны быть способны изменить длины сторон и углы.

Не должно быть возможности создать фигуры, не удовлетворяющие перечисленным условиям. Например, нельзя создать квадрат с разными углами. Геометрические соотношения проверять не нужно. Например, сумма углов в треугольнике может быть не равна 180.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонстрируйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. Значения используйте произвольные.

Инициализацию длин сторон и величин углов нужно выполнить с помощью вызова базовых конструкторов.

Для вывода информации о фигуре создайте функцию print_info, которая будет принимать в качестве аргумента указатель на базовый класс фигуры.

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
 
 
 
 
 
 Задание 2
 В целом подход правильный, но есть замечания:

 Нужно добавить остальные фигуры: прямоугольный треугольник, параллелограмм и т.д.
 Нужно еще добавить функцию print_info. Функция print_info принимает в качестве аргумента указатель на класс Figure и вызывает у него метод print_info который выводит информацию о фигуре. Именно через эту функцию и нужно выводить информацию о фигурах из main.
 Нужно исправить замечания.
 
 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class figure {

public:
    
    virtual string getSides() const = 0;
    virtual string getAngles()const = 0;
    virtual string getName() const = 0;
    
  virtual void printInfo()
  {
      cout << getName() << endl;
      cout << getSides() << endl;
      cout << getAngles()<< endl;
  }
    
};


class triangle : public figure {
    
protected:
    int a,b,c;
    int A,B,C;
    string T_name ="Triangle";
    
public:
    triangle( int sidea, int sideb, int sidec, int aA, int aB, int aC): a(sidea), b(sideb), c(sidec), A(aA),B(aB),C(aC){}
    
    string getName() const override {
        return T_name;
    }
    
    string getSides() const override {
        return "Sides: a=" +to_string(a) + " b=" + to_string(b) + " c=" + to_string(c) ;
    }
    
    string getAngles() const override {
        return "Angles: A=" +to_string(A) + " B=" + to_string(B) + " C=" + to_string(C) ;
        
    }
};
    
    
class r_Triangle : public triangle
{
    

public:
    r_Triangle(int sideA, int sideB ,int sideC, int angA, int angB): triangle ( sideA,sideB,sideC, angA,angB,90){}
    
    string getName(){
        return "r_Triangle";
    }
};
    

class i_Triangle : public triangle
{
    
public:
    i_Triangle( int sideA, int sideB)
    // в данном решении для конструктора я взял в открытом доступе подход к геометрическим формулам через код. Это обычные мат. правила.
    : triangle( sideA, sideB, sideB, acos((sideA / 2.0) / sideB) * 180 / M_PI, sideA, acos((sideA / 2.0) / sideB) * 180 / M_PI) {}
    string getName(){
        return "i_Triangle";
    }
};


class e_Triangle : public triangle {

    
public:
    e_Triangle( int side)
        : triangle( side, side, side, 60, 60, 60) {}
    string getName(){
        return "r_Triangle";
    }
};




class quad : public figure {
        
    protected:
        int a,b,c,d;
        int A,B,C,D;
        string Q_name;
        
    public:
        quad (int sidea, int sideb, int sidec, int sided, int aA, int aB, int aC, int aD):  a(sidea), b(sideb), c(sidec), d(sided), A(aA), B(aB), C(aC), D(aD){}
        
        string getName() const override {
            return Q_name;
        }
        
        string getSides() const override {
            return "Sides: a= " +to_string(a) + " b= " + to_string(b) + " c= " + to_string(c) +" d= " + to_string(d);
        }
        
        string getAngles() const override {
            return "Angles: A= " +to_string(A) + " B= " + to_string(B) + " C= " + to_string(C)+ " D= "+ to_string(D) ;
            
        }
};
  
class Rectangle: public quad {
    
public :
    Rectangle (int sidea, int sideb,int sidec, int sided):quad (sidea,sideb,sidec,sided,90,90,90,90){}
    string getName(){
        return "Rectangle";
    }
      
};

class Square: public quad {
public:
    Square(int sidea): quad (sidea,sidea,sidea,sidea,90,90,90,90){}
    string getName(){
        return "Square";
    }

    };

class Parallelogram : public quad {
public:
        Parallelogram( int sideA, int sideB, int angle)
            : quad( sideA, sideB, sideA, sideB, angle, 180 - angle, angle, 180 - angle) {}
    string getName(){
        return "Parallelogram";
    }

    };

class Rhombus : public quad {
public:
        Rhombus( int side, int angle)
            : quad( side, side, side, side, angle, 180 - angle, angle, 180 - angle) {}
    string getName(){
        return "Parallelogram";
    }
    };

    

void print_info(figure *fig){
    fig->printInfo();
}


int main(){
        
r_Triangle rightTriangle( 4,3,4,40,45);
i_Triangle isoscelesTriangle(5, 6);
e_Triangle equilateralTriangle( 7);
Rectangle rectangle(8, 9,8,9);
Square square(10);
Parallelogram parallelogram(11, 12, 60);
Rhombus rhombus( 30, 45);

//    rightTriangle.printInfo();
//    isoscelesTriangle.printInfo();
//    equilateralTriangle.printInfo();
//    rectangle.printInfo();
//    square.printInfo();
//    parallelogram.printInfo();
//    rhombus.printInfo();
    
    print_info(&square);

    return 0;
    
        
    }









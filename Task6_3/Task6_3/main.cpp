//Задача 3. Фигуры. Методы
//В этом задании вы добавите в вашу иерархию классов больше функциональности.

//Теперь ваши фигуры должны уметь немного больше:

//выводить информацию о себе;
//проверять правильность своих данных.
//Ваши фигуры:

//фигура (количество сторон равно 0);
//треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
//прямоугольный треугольник (угол C всегда равен 90);
//равнобедренный треугольник (стороны a и c равны, углы A и C равны);
//равносторонний треугольник (все стороны равны, все углы равны 60);
//четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
//прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
//квадрат (все стороны равны, все углы равны 90);
//параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
//ромб (все стороны равны, углы A,C и B,D попарно равны).
//Вы должны иметь возможность попросить фигуру вывести информацию о себе на консоль, а также узнать, является ли фигура правильной, то есть выполняются ли условия, указанные в списке выше.

//Информация о фигуре включает в себя:

//название фигуры;
//количество сторон;
//длины её сторон, если есть;
//величины её углов, если есть;
//является ли фигура правильной.
//Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонструйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о фигурах.

//Реализуйте методы вывода на консоль и проверки правильности фигуры с помощью виртуальных функций и переопределений. Используйте вызов базовой версии метода.

//Ваша задача — работать с экземплярами дочерних классов полиморфно, то есть с помощью указателя на базовый класс.

//Пример работы программы
//Консоль
//Фигура:
//Правильная
//Количество сторон: 0

//Треугольник:
//Правильная
//Количество сторон: 3
//Стороны: a=10 b=20 c=30
//Углы: A=50 B=60 C=70

//Равносторонний треугольник:
//Правильная
//Количество сторон: 3
//Стороны: a=30 b=30 c=30
//Углы: A=60 B=60 C=60

//Четырёхугольник:
//Неправильная
//Количество сторон: 4
//Стороны: a=10 b=20 c=30 d=40
//Углы: A=50 B=60 C=70 D=80

//Прямоугольник:
//Правильная
//Количество сторон: 4
//Стороны: a=10 b=20 c=10 d=20
//Углы: A=90 B=90 C=90 D=90

//Квадрат:
//Правильная
//Количество сторон: 4
//Стороны: a=20 b=20 c=20 d=20
//Углы: A=90 B=90 C=90 D=90


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class Figure {
    
public:
    virtual string getName() const =0 ;
    virtual string getDiscriptions() const = 0 ;
    virtual int sideCount() const = 0 ;
    virtual bool Type() const = 0 ;
    
    virtual void Info()
    {
        cout << getName() << endl;
        if (Type()){
            cout << "Regular " << endl;
        } else { cout<< "Non regular"<< endl;}
        cout<< "Sides counter : "<< sideCount() << endl;
        cout<< getDiscriptions() << endl;
    }
    
};


class Triangle : public Figure {
    
protected:
    int sA, sB, sC;
    int angA, angB, angC;

    
public:
    Triangle (int a, int b , int c , int A, int B, int C):  sA(a), sB(b), sC(c),angA(A), angB(B), angC(C){}
    
    string getName() const override
    {
        return "Triangle";
    }
    int sideCount() const override
    {
        return 3;
    }
    bool Type() const override
    {
        return ((angA + angB + angC == 180) || (angC == 90) || (sA == sC && angA == angC) || (sA == sB == sC ));
    }


    string getDiscriptions() const override
    {
        return "Side: a = "+ to_string(sA)+ ", b = " + to_string(sB)+ ", c = " + to_string(sC) + "\nAngles: A = " + to_string(angA) + ", B = " + to_string(angB)+ ", C = "+ to_string(angC)+ "\n";
    }
    

    
    
};

///Sub-triangle types

class r_Triangle : public Triangle 
{
protected:
    int sA, sB, sC , sD;
    int angA, angB, angC, angD;
    
public:
    r_Triangle(int sA, int sB, int sC, int angA, int angB, int angC) : Triangle(sA, sB, sC, angA, angB, angC) {}
    string getName() const override
    {
        return "Right triangle";
    }
    void Info() override;
    
};

class i_Triangle : public Triangle 
{
protected:
    int sA, sB, sC , sD;
    int angA, angB, angC, angD;
    
public:
    i_Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {}
    string getName() const override
    {
        return "Isosceles triangle";
    }
 
};

class e_Triangle : public Triangle 
{
protected:
    int sA, sB, sC , sD;
    int angA, angB, angC, angD;
    
public:
    e_Triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {}
    string getName() const override
    {
        return "Equilateral triangle";
    }
};

///Sub-quad types

class Quad: public Figure
{
    
protected:
    int sA, sB, sC , sD;
    int angA, angB, angC, angD;
   
    
public:
    Quad(int a, int b , int c, int d, int A, int B, int C, int D): sA(a), sB(b), sC(c), sD(d), angA(A),angB(B), angC(C), angD(D){}
    
    string getName() const override
    {
        return "Quad";
    }
    string getDiscriptions() const override
    {
        return "Side: a = "+ to_string(sA)+ ", b = " + to_string(sB)+ ", c = " + to_string(sC) + ", d = "+ to_string(sD)+ "\nAngles: A = " + to_string(angA) + ", B = " + to_string(angB)+ ", C = "+ to_string(angC) + ", D = " + to_string(angD)+ "\n";
    }
    int sideCount() const override
    {
        return 4;
    }
    bool Type() const override
    {
        return (angA + angB + angC + angD == 360 || (angA == 90 && angB == 90 && angC == 90 && angD == 90) || (angA == angB && angB == angC && angC == angD) || (sA == sB && sB == sC && sC == sD));
    }
    
    
};

class Rectangle : public Quad 
{
protected:
    int sA, sB, sC , sD;
    int angA, angB, angC, angD;
    
public:
    Rectangle(int a, int b , int c, int d, int A, int B, int C, int D) :Quad (a,b,c,d,A,B,C,D){}
    
    string getName() const override{
        return "Rectangle";
        }
};

class Square : public Quad 
{
    protected:
        int sA, sB, sC , sD;
        int angA, angB, angC, angD;
        
    public:
        string getName() const override{
        return "Rectangle";
        }
};

class Parall : public Quad 
{
protected:
    int sA, sB, sC , sD;
    int angA, angB, angC, angD;
    
public:
    Parall(int a, int b , int c, int d, int A, int B, int C, int D) :Quad (a,b,c,d,A,B,C,D){}
    string getName() const override{
        return "Parall";
    }
};

class Romb : public Quad 
{
protected:
    int sA, sB, sC , sD;
    int angA, angB, angC, angD;
    
public:
    Romb(int a, int b , int c, int d, int A, int B, int C, int D) :Quad (a,b,c,d,A,B,C,D){}
    string getName() const override{
        return "Rhombus";
    }
};





int main(){
    
    
    Triangle tri(10,20,30,50,60,90);
    Romb quad1(20, 20, 20, 20, 30, 40, 30, 40);
    
    Figure* romb = &quad1;
    
    romb->Info();
    
    
    tri.Info();
    
    
    return 0;
    
}





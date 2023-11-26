//Задача 3. Фигуры. Методы
//В этом задании вы добавите в вашу иерархию классов больше функциональности.

//Теперь ваши фигуры должны уметь немного больше:

//выводить информацию о себе;
//проверять правильность своих данных.
//Ваши фигуры:

//фигура (количество сторон равно 0);


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


class figure {

    public:
        
        virtual int sideCount() const = 0;
        virtual string getSides() const = 0;
        virtual string getAngles()const = 0;
        virtual string getName() const = 0;
        virtual bool Type() const = 0 ;
        
      virtual void printInfo()
      {
          cout << getName() << endl;
          if (Type()== true){
              cout <<"Правильная"<< endl;
          }else {cout <<"! Неправильная !"<< endl;}
          cout << "Sides count: " << sideCount() << endl;
          cout << getSides() << endl;
          cout << getAngles()<< endl;
          cout << "//////////////////////////////////////////////"<< endl;
      }
        
    };


// Sub-classes

class Triangle : public figure {
    
protected:
    int a,b,c;
    int A, B, C;
    string T_name;

    
public:
    Triangle( int sidea, int sideb, int sidec, int aA, int aB, int aC):  a(sidea), b(sideb), c(sidec), A(aA),B(aB),C(aC){}
    
    
    string getName() const override
    {
        return T_name;
    }
    int sideCount() const override
    {
        return 3;
    }
    bool Type() const override
    {
        return ((A+B+C)==180&& ((a + b > c) && (a + b > c) && (b + c > a)));
            
    }

    string getSides() const override {
        return "Sides: a=" +to_string(a) + " b=" + to_string(b) + " c=" + to_string(c) ;
    }
    
    string getAngles() const override {
        return "Angles: A=" +to_string(A) + " B=" + to_string(B) + " C=" + to_string(C) ;
        
    }
    
};

///Sub-triangle types
/////треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
//прямоугольный треугольник (угол C всегда равен 90);
//равнобедренный треугольник (стороны a и c равны, углы A и C равны);
//равносторонний треугольник (все стороны равны, все углы равны 60);

class r_Triangle : public Triangle
{
    

public:
   r_Triangle( int sideA, int sideB)
        : Triangle(sideA, sideB, static_cast<int>(sqrt(sideA * sideA + sideB * sideB)), 90, asin(sideA / sqrt(sideA * sideA + sideB * sideB)) * 180 / M_PI, 90) {}
  
    bool Type() const override
    { if((A+B+C)==180&& ((a + b > c) && (a + b > c) && (b + c > a))){
        return (C == 90);
    } else {return false;}
        }
    
    string getName() const override {
        return "r_Triangle";
    }
    
};
    

class i_Triangle : public Triangle
{
    
public:
    i_Triangle(int sideA, int sideB): Triangle( sideA, sideB, sideA, acos((sideA / 2.0) / sideB) * 180 / M_PI, sideA, acos((sideA / 2.0) / sideB) * 180 / M_PI) {}
    
    bool Type() const override
    {
        if((A+B+C)==180&& ((a + b > c) && (a + b > c) && (b + c > a))){
            return (A == C && a == c);
        } else{return false;}
        
    }
    string getName() const override {
            return "i_Triangle";
        }
    
    
};


class e_Triangle : public Triangle {
public:
    e_Triangle(int side)
        : Triangle( side, side, side, 60, 60, 60) {}
    string getName() const override {
            return "i_Triangle";
        }
};



class Quad: public figure
{
    
protected:
    int a,b,c,d;
    int A,B,C,D;
    string Q_name;
   
 
public:
    Quad (int sidea, int sideb, int sidec, int sided, int aA, int aB, int aC, int aD): a(sidea), b(sideb), c(sidec), d(sided), A(aA), B(aB), C(aC), D(aD){}
    
    string getName() const override {
        return Q_name;
    }
    
    string getSides() const override {
        return "Sides: a= " +to_string(a) + " b= " + to_string(b) + " c= " + to_string(c) +" d= " + to_string(d);
    }
    
    string getAngles() const override {
        return "Angles: A= " +to_string(A) + " B= " + to_string(B) + " C= " + to_string(C)+ " D= "+ to_string(D) ;
        
    }
    int sideCount() const override
    {
        return 4;
    }
    bool Type() const override
    {
        return((A + B + C + D == 360) || (A == 90 && B == 90 && C == 90 && D == 90) || (A == B && B == C && C == D) || ((a == c && b == d)&&(A + B + C + D == 360)));
        }
    
};

///Sub-quad types
/////четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
//прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
//квадрат (все стороны равны, все углы равны 90);
//параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
//ромб (все стороны равны, углы A,C и B,D попарно равны).

    
  class Rectangle: public Quad {
      
  public :
      Rectangle( int sidea, int sideb,int sidec, int sided):Quad (sidea,sideb,sidec,sided,90,90,90,90){}
    
      bool Type() const override
      { if((A+B+C)==180&& ((a + b > c) && (a + b > c) && (b + c > a))){
          return((a == c && b == d)&& (A == 90 && B == 90 && C == 90 && D == 90));
      } else {return false;}
      }
      
      string getName() const override {
          return "Rectangle";
      }
       
  };

  class Square: public Quad {
  public:
      Square(int sidea): Quad (sidea,sidea,sidea,sidea,80,90,90,90){} // ПОСТАВИЛ  А= 80 для проверки условий!
      
      bool Type() const override
      {
          return((A == 90 && B == 90 && C == 90 && D == 90) || (A == B && B == C && C == D));
          
          }
      string getName() const override {
          return "Square";
      }
      };


  class Parallelogram : public Quad {
  public:
          Parallelogram( int sideA, int sideB, int angle)
              : Quad( sideA, sideB, sideA, sideB, angle, 180 - angle, angle, 180 - angle) {}
      
      bool Type() const override
      {
          return ((a == c && b == d)&&(A==C&&B==D));
      }
      
      string getName() const override {
          return "Parallelogram";
      }
          
      };

  class Rhombus : public Quad {
  public:
          Rhombus (int side, int angle)
              : Quad( side, side, side, side, angle, 180 - angle, angle, 180 - angle) {}
      
      bool Type() const override
      {
          if((A+B+C)==180&& ((a + b > c) && (a + b > c) && (b + c > a))){
              return((a == c&&b==c && c == d)&&(A==C&&B==D));
          } else { return false;}
              
      }
      
      string getName() const override {
          return "Romb";
      }
      };

void print_info ( figure * fig) {
    fig->printInfo();
}






int main(){
    
    
r_Triangle rightTriangle(3, 4);
i_Triangle isoscelesTriangle(5, 6);
e_Triangle equilateralTriangle(7);
Rectangle rectangle( 8, 9,8,9);
Square square(10);
Parallelogram parallelogram(11, 12, 60);
Rhombus rhombus(13, 30);

//rightTriangle.printInfo();
//isoscelesTriangle.printInfo();
//equilateralTriangle.printInfo();
//rectangle.printInfo();
//square.printInfo();
//parallelogram.printInfo();
//rhombus.printInfo();
//    
    print_info(&rightTriangle);
    print_info(&square);
    print_info(&rhombus);

    

    
    return 0;
    
}

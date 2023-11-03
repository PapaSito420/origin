//Задача 1. Фигуры. Количество сторон
//В этом задании вы построите первую простую иерархию классов для заданной предметной области.

//Предметная область выглядит следующим образом: есть сущность фигура. Фигуры бывают двух типов: треугольник и четырёхугольник. У фигуры есть количество сторон. Для неизвестной фигуры будем считать это количество равным нулю. У треугольника три стороны, у четырёхугольника четыре стороны. У любой фигуры мы хотим узнавать количество её сторон, но мы не должны быть способны изменить количество сторон для заданной фигуры извне.

//Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонстрируйте их работу: создайте по одному экземпляру каждого класса и выведите информацию о количестве его сторон на консоль.

//ПРИМЕР РАБОТЫ :
//Консоль
//Количество сторон:
//Фигура: 0
//Треугольник: 3
//Четырёхугольник: 4



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class figure {
    
protected:
    int side_count;
    string name;
    
public:
    figure(int sides): side_count(sides){
        name = "Figure : ";
    }
    
    int get_s (){
        return side_count;
    }
    
    string get_n (){
        return name;
    }
};


class triangle : public figure {
    
public:

    triangle(): figure(3){
    name ="Triangle : ";
}
    
};


class quad : public figure {
    
public:
    quad():figure(4){
        name = "Quad : ";
    }
};


int main(){
    figure figure(0);
    triangle triangle;
    quad quad;
    
    cout<<"Counts of sides :"<<endl;
    cout<<figure.get_n()<<figure.get_s()<<endl;
    cout<< triangle.get_n()<<triangle.get_s()<<endl;
    cout<< quad.get_n()<<quad.get_s()<<endl;
    
    return 0;
}

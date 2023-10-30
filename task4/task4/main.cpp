////
////  main.cpp
////  task4
////
////  Created by Andrey Menshikov on 26.10.2023.
////
//
//Задача 1. Калькулятор двух чисел
//В этом задании вам нужно будет создать класс, выполняющий простые арифметические операции для двух чисел, и продемонстрировать его работу
//
//Создайте класс Calculator. Класс должен содержать два поля num1 и num2 для хранения дробных чисел. Также класс должен содержать следующие методы:
//
//double add() - метод должен возвращать результат сложения num1 и num2
//double multiply() - метод должен возвращать результат перемножения num1 и num2
//double subtract_1_2() - метод должен возвращать результат вычитания num2 из num1
//double subtract_2_1() - метод должен возвращать результат вычитания num1 из num2
//double divide_1_2() - метод должен возвращать результат деления num1 на num2
//double divide_2_1() - метод должен возвращать результат деления num2 на num1
//bool set_num1(double num1) - метод должен установить значение поля num1 равное значению аргумента num1 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
//bool set_num2(double num2) - метод должен установить значение поля num2 равное значению аргумента num2 в случае, если значение аргумента не равно 0. Возвращает true, если установка произошла успешно, в обратном случае false
//Напишите код, демонстрирующий работу класса Calculator. Попросите пользователя ввести два числа. После этого выведите пользователю результаты всех операций или попросите его ввести значение ещё раз, если предыдущий ввод был некорректен
//
//Программа спрашивает пользователя бесконечно, пока он сам не закроет консоль
//
//Пример работы программы
//Консоль
//Введите num1: 3
//Введите num2: 6
//num1 + num2 = 9
//num1 - num2 = -3
//num2 - num1 = 3
//num1 * num2 = 18
//num1 / num2 = 0.5
//num2 / num1 = 2
//Введите num1: 5
//Введите num2: 0
//Неверный ввод!
//Введите num2: 5
//num1 + num2 = 10
//num1 - num2 = 0
//num2 - num1 = 0
//num1 * num2 = 25
//num1 / num2 = 1
//num2 / num1 = 1



#include <iostream>
#include <string>
using namespace std;



class Calculator
{
private:
    double a;
    double b;
    
public:
    
    bool setA(double num1){
        if(num1 != 0){
            a = num1;
            return true;
        } else { cout<< "Неверный ввод!"<< endl;
            return false;}
    }
    bool setB(double num2){
        if(num2 != 0){
            b = num2;
            return true;
        } else { cout<< "Неверный ввод!"<< endl;
            return false;}
    }
    
    double add(){
        
        double sum = a + b;
        cout<< "num1 + num2 = "<< sum<< endl;
        return sum;
    }
    
    double multiply(){
        
        double mul = a * b;
        cout<< "num1 * num2 = "<< mul<< endl;
        return mul;
    }
    
    double subtract_1_2(){
      
        double sub = a - b;
        cout<< "num1 - num2 = "<< sub<< endl;
        return sub;
    }

    
    double subtract_2_1(){
      
        double sub2 = b - a;
        cout<< "num2 - num1 = "<< sub2<< endl;
        return sub2;
    }
    
    double divide_1_2(){
    
        double div = a / b;
        cout<< "num1 / num2 = "<< div<< endl;
        return div;
    }
    
    double divide_2_1(){
      
        double div2 = b / a;
        cout<< "num2 / num1 = "<< div2<< endl;
        return div2;
    }
    
    
};




int main ()
{
    double num1;
    double num2;
    Calculator Numb;
    
    cout<<"Введите num1: ";
    cin>> num1;
    while(!Numb.setA(num1)){
        cout<<"\nВведите num1: ";
        cin>> num1;
    }
    
    cout<< "\nВведите num2: ";
    cin>> num2;
    while(!Numb.setB(num2)){
        cout<<"\nВведите num2: ";
        cin>> num2;
    }
    cout<< '\n';
    Numb.add();
    Numb.multiply();
    Numb.subtract_1_2();
    Numb.subtract_2_1();
    Numb.divide_1_2();
    Numb.divide_2_1();
    
    return 0;
    

}

//
//  main.cpp
//  Task4_1

//  Created by Andrey Menshikov on 27.10.2023.

//Задача 2. Счётчик
//В этом задании вам нужно будет создать класс-счётчик

//Создайте класс Counter. Класс должен выполнять функцию счётчика, для этого он должен предоставлять:

//возможность увеличить своё значение на 1
//возможность уменьшить своё значение на 1
//возможность посмотреть своё текущее значение
//возможность создания экземпляра класса с начальным значением по умолчанию (1)
//возможность создания экземпляра класса с инициализирующим начальным значением
//Обратите внимание на то, что у внешнего кода не должно быть возможности изменить внутреннее значение счётчика напрямую

//Напишите код, демонстрирующий работу класса Counter. Спросите у пользователя, хочет ли он указать начальное значение для счётчика. Если хочет, дайте ему возможность это сделать. Затем предоставьте пользователю возможность вводить команды:

//+: увеличьте счётчик на 1
//-: уменьшите счётчик на 1
//=: выведите текущее значение счётчика
//x: завершите работу программы
//Пример работы программы
//Консоль
//Вы хотите указать начальное значение счётчика? Введите да или нет: да
//Введите начальное значение счётчика: 6
//Введите команду ('+', '-', '=' или 'x'): +
//Введите команду ('+', '-', '=' или 'x'): +
//Введите команду ('+', '-', '=' или 'x'): =
//8
//Введите команду ('+', '-', '=' или 'x'): -
//Введите команду ('+', '-', '=' или 'x'): =
//7
//Введите команду ('+', '-', '=' или 'x'): x
//До свидания!




#include <iostream>
#include <string>
using namespace std;



class Counter 
{
private:
    int counter;
    
public:
    
    Counter():counter(1) {}
    
    int setCounter (int value){
        counter = value;
        return counter;
    }
    
    void incr(){
        counter++;
    }
    
    void dec(){
        counter--;
    }
    
    int get(){
        return counter;
    }
    
    void setV(int value){
        counter= value;
    }
    
};



int main (){
    int value;
    string answer;
    Counter count;
      
    cout<< "Вы хотите указать начальное значение счётчика? Введите да или нет: "<< endl;
    cin >> answer;
    
    if(answer == "да"){
        cout << "Введите начальное значение счётчика: ";
        cin >> value;
        
        count.setV(value);
                
 
    
    string command;
    while (true) {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> command;
    
    if (command == "+") {
                count.incr();
            } else if (command == "-") {
                count.dec();
            } else if (command == "=") {
                cout << "Текущее значение счётчика: " << count.get() << endl;
            } else if (command == "x" || command =="х") {
                break;
            }
        }
    cout<<"До свидания! "<< endl;
    } else if ( answer == "нет"){
        
        string command;
        
        while (true) {
            cout << "Введите команду ('+', '-', '=' или 'x'): ";
            cin >> command;
        
        if (command == "+") {
                    count.incr();
                } else if (command == "-") {
                    count.dec();
                } else if (command == "=") {
                    cout << "Текущее значение счётчика: " << count.get() << endl;
                } else if (command == "x" || command =="х") {
                    break;
                }
            }
        cout<<"До свидания! "<< endl;
    }
    
    return 0;
    
    
}

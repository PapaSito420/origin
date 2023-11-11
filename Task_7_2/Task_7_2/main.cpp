/*
 Задача 2. Класс
 В этом задании вы вынесете класс в отдельный файл.

 Возьмите класс счётчика из предыдущего домашнего задания.

 Вынесите этот класс в отдельный файл, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.

 Пример работы программы
 Консоль
 Вы хотите указать начальное значение счётчика? Введите да или нет: да
 Введите начальное значение счётчика: 6
 Введите команду ('+', '-', '=' или 'x'): +
 Введите команду ('+', '-', '=' или 'x'): +
 Введите команду ('+', '-', '=' или 'x'): =
 8
 Введите команду ('+', '-', '=' или 'x'): -
 Введите команду ('+', '-', '=' или 'x'): =
 7
 Введите команду ('+', '-', '=' или 'x'): x
 До свидания!
 */






#include <iostream>
#include <string>
#include "counter.hpp"
using namespace std;




int main (){
    setlocale(LC_ALL, "ru");
    
    int value;
    string answer;
    Counter count(1);
      
    cout<< "Вы хотите указать начальное значение счётчика? Введите да или нет: "<< endl;
    cin >> answer;
    
    if(answer == "да"){
        cout << "Введите начальное значение счётчика: ";
        cin >> value;
        count = Counter(value);
    
    
    string command;
        
    while (true) {
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> command;
    
    if (command == "+") {
                count.increment();
            } else if (command == "-") {
                count.decrement();
            } else if (command == "=") {
                cout << "Текущее значение счётчика: " << count.getValue() << endl;
            } else if (command== "x"|| command=="х"){break;}

        }
    cout<<"До свидания! "<< endl;
    } 
    
    else if ( answer == "нет"){
        
        string command;
        
        while (true) {
            cout << "Введите команду ('+', '-', '=' или 'x'): ";
            cin >> command;
            
            if (command == "+") {
                count.increment();
            } else if (command == "-") {
                count.decrement( );
            } else if (command == "=") {
                cout << "Текущее значение счётчика: " << count.getValue() << endl;
            }else if (command=="x"|| command=="х"){break;}
        }
        cout<<"До свидания! "<< endl;
    }
    
    return 0;
    
    
}

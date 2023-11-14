
//  main.cpp
//  Task_8_2
//  Created by Andrey Menshikov on 14.11.2023.

/*
 Задача 2. Макрос SUB
 В этом задании вы создадите простой макрос.

 Ваша задача — определить макрос SUB, который должен вычитать числа друг из друга и использоваться следующим образом:

 int main (int argc, char** argv)
 {
     int a = 6;
     int b = 5;
     int c = 2;
     std::cout << SUB(a, b) << std::endl;
     std::cout << SUB(a, b) * c << std::endl;
     std::cout << SUB(a, b + c) * c << std::endl;
 }
 Программа должна выводить результат, указанный ниже:

 Пример работы программы
 Консоль
 1
 2
 -2
 */

#include <iostream>
using namespace std;

#define SUB(x,y) ((x) - (y))

int main(int argc, const char * argv[]) {
    int a =1;
    int b =2;
    int c =4;
    
    std::cout << SUB(a, b) << std::endl;
    std::cout << SUB(a, b) * c << std::endl;
    std::cout << SUB(a, b + c) * c << std::endl;
    
    
    
    return 0;
}

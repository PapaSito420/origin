#include <iostream>
#include "Greeter.h" 

int main() {
    std::cout << "Введите имя: ";
    std::string name;
    std::cin >> name;
    std::cout << Greeter::greet(name) << std::endl;
    return 0;
}

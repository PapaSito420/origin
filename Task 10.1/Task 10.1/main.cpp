/*
 Задача 1. Сравнения в дробях
 В этом задании вы переопределите операторы сравнения для дробей.
 
 Дан код на C++:
 
 
 Ваша задача — дописать класс Fraction так, чтобы программа компилировалась и работала корректно.
 
 Пример работы программы
 Консоль
 f1 not == f2
 f1 != f2
 f1 not < f2
 f1 > f2
 f1 not <= f2
 f1 >= f2
 */


#include <iostream>

class Fraction
{
private:
int numerator_;
int denominator_;

public:
    Fraction(int numerator, int denominator): numerator_(numerator), denominator_(denominator){}
    
    
       bool operator==(const Fraction& other) const {
           return numerator_ * other.denominator_ == denominator_ * other.numerator_;
       }

       
       bool operator!=(const Fraction& other) const {
           return !(*this == other);
       }

       
       bool operator<(const Fraction& other) const {
           return numerator_ * other.denominator_ < denominator_ * other.numerator_;
       }

       
       bool operator>(const Fraction& other) const {
           return other < *this;
       }

       
       bool operator<=(const Fraction& other) const {
           return !(*this > other);
       }

       
       bool operator>=(const Fraction& other) const {
           return !(*this < other);
       }

    
};



int main()
{
Fraction f1(4, 3);
Fraction f2(6, 11);

std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
return 0;
}

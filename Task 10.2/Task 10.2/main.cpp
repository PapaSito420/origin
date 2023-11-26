/*
 
 Задача 2. Остальные операции с дробями
В этом задании вы переопределите остальные операторы для класса дроби.

Необходимо переопределить операторы для класса Fraction из предыдущего задания:

сложение;
вычитание;
умножение;
деление;
унарный минус;
инкремент постфиксный и префиксный;
декремент постфиксный и префиксный.
Продемонстрируйте работу ваших операторов. Попросите пользователя ввести две дроби и покажите результат каждой операции. Операции декремента и инкремента отнимают и прибавляют к дроби 1 соответственно.

Составьте выражения, содержащие постфиксный и префиксный инкремент и декремент, чтобы продемонстрировать разницу между постфиксной и префиксной версиями.

Пример работы программы
Консоль
Введите числитель дроби 1: 3
Введите знаменатель дроби 1: 4
Введите числитель дроби 2: 4
Введите знаменатель дроби 2: 5
3/4 + 4/5 = 31/20
3/4 - 4/5 = -1/20
3/4 * 4/5 = 3/5
3/4 / 4/5 = 15/16
++3/4 * 4/5 = 7/5
Значение дроби 1 = 7/4
7/4-- * 4/5 = 7/5
Значени дроби 1 = 3/4
 
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

    friend std::istream& operator >> (  std::istream& in , Fraction &other ){
        char slash;
        in >> other.denominator_ >> slash >> other.numerator_;
        return in;
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

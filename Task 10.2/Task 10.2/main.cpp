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

class Fraction {
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator) {}

    Fraction operator+(const Fraction& other) const {
        return Fraction(numerator_ * other.denominator_ + other.numerator_ * denominator_,
                        denominator_ * other.denominator_);
    }

    Fraction operator-(const Fraction& other) const {
        return Fraction(numerator_ * other.denominator_ - other.numerator_ * denominator_,
                        denominator_ * other.denominator_);
    }

    Fraction operator*(const Fraction& other) const {
        return Fraction(numerator_ * other.numerator_, denominator_ * other.denominator_);
    }

    Fraction operator/(const Fraction& other) const {
        return Fraction(numerator_ * other.denominator_, denominator_ * other.numerator_);
    }

    Fraction operator-() const {
        return Fraction(-numerator_, denominator_);
    }

    Fraction& operator++() {
        numerator_ += denominator_;
        return *this;
    }

    Fraction operator++(int) {
        Fraction temp = *this;
        ++(*this);
        return temp;
    }

    Fraction& operator--() {
        numerator_ -= denominator_;
        return *this;
    }

    Fraction operator--(int) {
        Fraction temp = *this;
        --(*this);
        return temp;
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
        os << fraction.numerator_ << "/" << fraction.denominator_;
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Fraction& fraction) {
        char slash; // Для пропуска символа '/'
        is >> fraction.numerator_ >> slash >> fraction.denominator_;
        return is;
    }
};

int main() {
    Fraction f1(1, 1);
    Fraction f2(1, 1);

    std::cout << "Введите числитель и знаменатель дроби 1 в формате a/b: ";
    std::cin >> f1;
    std::cout << "Введите числитель и знаменатель дроби 2 в формате a/b: ";
    std::cin >> f2;

    std::cout << f1 << " + " << f2 << " = " << (f1 + f2) << "\n";
    std::cout << f1 << " - " << f2 << " = " << (f1 - f2) << "\n";
    std::cout << f1 << " * " << f2 << " = " << (f1 * f2) << "\n";
    std::cout << f1 << " / " << f2 << " = " << (f1 / f2) << "\n";

    Fraction preIncrementedF1 = ++f1;
    std::cout << "++" << f1 << " * " << f2 << " = " << (preIncrementedF1 * f2) << "\n";
    std::cout << "Значение дроби 1 = " << f1 << "\n";

    Fraction postDecrementedF1 = f1--;
    std::cout << f1 << "-- * " << f2 << " = " << (postDecrementedF1 * f2) << "\n";
    std::cout << "Значение дроби 1 = " << f1 << "\n";
    
    return 0;
}

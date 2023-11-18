#include "e_Triangle.hpp"

e_Triangle::e_Triangle(const string& name, int a, int b, int c , int A, int B , int C): Triangle (name, a, b, c, A, B, C) {
    if(name != "Прямоугольный треугольник" && C != 90) {
        throw Errors("Ошибка создания Прямоугольного треугольника: условия не выполнены.");
    }
}

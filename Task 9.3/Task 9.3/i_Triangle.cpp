#include "i_Triangle.hpp"

i_Triangle::i_Triangle (const string& name, int a, int b, int c , int A, int B , int C): Triangle(name,a,b,c,A,B,C) {
    if(name != "Равнобедренный треугольник" && C != A) {
    throw Errors("Ошибка создания равнобедренного треугольника: условия не выполнены.");
}}

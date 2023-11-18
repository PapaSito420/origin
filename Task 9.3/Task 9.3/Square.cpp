
#include "Square.hpp"


#include "Square.hpp"

Square::Square(const string& name, int a, int b, int c ,int d, int A, int B , int C, int D): Quad(name, a, b,c,d,A,B,C,D){
    if(name != "Квадрат" && c != a && c != d && c != b && A != 90 && B != 90 && C != 90) {
                throw Errors("Ошибка создания Квадрата: условия не выполнены.");
            }
}

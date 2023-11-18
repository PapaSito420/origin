
#include "Parallelogram.hpp"

Parr::Parr(const string& name, int a, int b, int c ,int d, int A, int B , int C, int D): Quad (name, a,b,c,d,A,B,C,D){
    if(name != "Параллелограмм" && c != a && b != d && A != C && B !=D) {
            throw Errors("Ошибка создания Параллелограммa: условия не выполнены.");
        }
}

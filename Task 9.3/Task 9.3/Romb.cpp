

#include "Romb.hpp"



Romb::Romb (const string& name, int a, int b, int c ,int d, int A, int B , int C, int D): Quad (name, a,b,c,d,A,B,C,D){
    if(name != "Ромб" && c != a && b != d && (A+ C)< (B+D)) {
            throw Errors("Ошибка создания Ромба: условия не выполнены.");
        }
}

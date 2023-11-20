
#include <string>
#include <iostream>
using namespace std;

class Complex {
private:
    double Re, Im;
public:
    Complex ( double _Re = 1 , double Im = 1) {Re =_Re ; Im = _Im;};
    void print() {
        if (Im < 0){
            cout<< Re << " -j*"<< abs(Im) <<endl;
        }
        else if( Im > 0) {
            cout<< Re << " j*"<< abs(Im) <<endl;
        }
        else {
            cout<< Re << endl;
        }
    }
    
    friend void swap(Complex& cmp);
};


void swap (Complex& cmp){
    double temp = cmp.Re;
    
}

int main() {
    
    Complex C1 (1,3);
    C1.print();
    swap(C1);
    
    
}

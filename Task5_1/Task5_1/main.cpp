//Задача 1. Адреса
//В этом задании вы будете читать адреса из файла и выводить их в другой файл в другом формате.

//Вам дан файл in.txt, в котором находится N адресов. Число N идёт первым в файле. После числа N располагаются N блоков по 4 строки в каждом. Каждый блок состоит из следующих строк: название города, название улицы, номер дома, номер квартиры.

//Задача программы заключается в том, чтобы считать адреса из файла in.txt и вывести их в файл out.txt в другом формате и в обратном порядке. Не забудьте вывести количество адресов в начале.

//Формат вывода адреса: <название города>, <название улицы>, <номер дома>, <номер квартиры>.

//Пример работы программы
//in.txt
//3
//Москва
//Строителей
//34
//12
//Омск
//Пушкина
//2
//13
//Новосибирск
//Мира
//85
//64

//out.txt
//3
//Новосибирск, Мира, 85, 64
//Омск, Пушкина, 2, 13
//Москва, Строителей, 34, 12



#include <iostream>
#include <string>
#include <fstream>


using namespace std;

class twister {
    
private:

    string r_city;
    string r_street;
    int r_strtNum;
    int r_flat;
    
public:
    
    twister( const string &c, const string &s, int strNum, int fN ): r_city(c), r_street(s), r_strtNum(strNum), r_flat(fN){};
    
    string toOut(){
        return r_city + ", " + r_street + ", "+ std::to_string(r_strtNum) + ", "+ std::to_string(r_flat);
    }
    
};



int main() {
    
    int N;
    string city;
    string street;
    int strtNum;
    int flat;
    
    ifstream file("in.txt");
    ofstream outfile("out.txt");
    
    file>>N;
    twister **myTwister = new twister *[N];
    
    for (int i = 0 ; i<N ; i++){
        file>> city>> street>> strtNum>> flat;
        myTwister[i] = new twister(city, street, strtNum,flat);
    }
    
    
    
    outfile<<N <<endl;
    for (int i= N-1; i>= 0 ;i --){
        outfile << myTwister [i]->toOut()<< endl;
       
    }
    
   
    
    for (int i = 0 ; i<N ; i++){
        delete myTwister[i];
    }
    
    delete [] myTwister;

    file.close();
    outfile.close();
    
    return 0;
    
}



//Задача 2. Сортируем адреса
//В этом задании вы будете читать из файла адреса и выводить их в другой файл в другом формате, отсортированными по названию города.

//Вам дан файл in.txt, в котором находится N адресов. Число N идёт первым в файле. После числа N располагаются N блоков по 4 строки в каждом. Каждый блок состоит из следующих строк: название города, название улицы, номер дома, номер квартиры.

//Задача программы заключается в том, чтобы считать адреса из файла in.txt, отсортировать их по названию города и вывести отсортированный список адресов в файл out.txt в другом формате. Не забудьте вывести количество адресов в начале.

//Города должны быть отсортированы в алфавитном порядке.

//Формат вывода адреса: <название города>, <название улицы>, <номер дома>, <номер квартиры>.

//Пример работы программы

//in.txt
//5
//Москва
//Строителей
//34
//12
//Новокузнецк
//Науки
//5
//16
//Омск
//Пушкина
//2
//13
//Москва
//Арбат
//4
//1
//Новосибирск
//Мира
//85
//64

//out.txt
//5
//Москва, Строителей, 34, 12
//Москва, Арбат, 4, 1
//Новокузнецк, Науки, 5, 16
//Новосибирск, Мира, 85, 64
//Омск, Пушкина, 2, 13



#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>


using namespace std;

class twist {

private:
 string n_city, n_street;
 int n_build, n_flat;

public:
  twist(const string &c, const string &s, int b, int f): n_city(c), n_street(s), n_build(b), n_flat(f){};

 string getO(){
   return n_city + ", " + n_street + ", " + to_string(n_build) + ", " + to_string(n_flat);
 }

    string getCity() const {
        return n_city;
    }
   
};

bool compareCity (const twist* a, const twist* b){
    return a->getCity()< b->getCity();
}

int main() {

  int N;
  string city, street;
  int build, flat;

    
  ifstream file ("in.txt");
  ofstream outfile ("out.txt");
    
    

  file >> N ;

  twist ** adr = new twist*[N];
  for (int i = 0 ; i < N ; i++){
    file >> city>> street >> build >>flat;
    adr[i] = new twist(city, street, build,flat);
  }

  outfile<< N << endl;
    sort(adr,adr+N,compareCity);
    for (int i = 0 ; i < N-1 ; i++){
        outfile<< adr[i]->getO()<< endl;
        
  }

  file.close();
  outfile.close();

  for (int i = 0 ; i<N ; i++){
    delete adr[i];
  }

  delete [] adr;

  return 0;

}



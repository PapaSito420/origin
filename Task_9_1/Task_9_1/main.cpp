//
//  main.cpp
//  Task_9_1
//
//  Created by Andrey Menshikov on 16.11.2023.
//

/*
 Задача 1. Простое исключение
 В этом задании вы попробуете выбросить и обработать исключение.

 Создайте функцию int function(std::string str, int forbidden_length). Эта функция должна возвращать длину переданной строки, если эта длина не равна значению переданного параметра forbidden_length. В противном случае она должна выбрасывать исключение bad_length.

 Для проверки функции организуйте работу с пользователем. В начале задайте запретную длину, а затем считывайте пользовательские строки и выводите их длину до тех пор, пока пользователь не введёт строку запретной длины. После этого сообщите ему, что он ввёл строку запретной длины, и завершите программу.

 Пример работы программы
 Консоль
 Введите запретную длину: 5
 Введите слово: Привет
 Длина слова "Привет" равна 6
 Введите слово: мир
 Длина слова "мир" равна 3
 Введите слово: пирог
 Вы ввели слово запретной длины! До свидания
 */

#include <iostream>
#include <string>

using namespace std;


class bad: public exception{
public:
    const char* what() const noexcept override{
      return "Вы ввели запретное по длинне слово !";
    }
};

int chechLength (const string& word, int forbidden_length  ){
    if (word.length() == forbidden_length *2){
        throw bad();
    }
    return word.length();
}




int main (){
    
    string word;
    int forbidden_length;
    
    cout<< "Введите запретную длинну слова: ";
    cin >> forbidden_length;
    
    while(true){
        cout<< "\nВведите слово: ";
        cin>> word ;
        try{
            int word_l = chechLength(word, forbidden_length);
            cout<<"Длинна слова <"<< word << "> = "<< word_l ;
        } catch(const bad& e){
            cout<< "Гудбай !"<< endl;
            break;
        }
    }
    return 0;
}











/*
class BadLength: public exception {
public:
    const char* what() const noexcept override {
        return "Вы ввели слово запретной длины!";
    }
};

int takeLength(const string& word, int forbiddenLength) {
    if (word.length() == forbiddenLength *2) {
        throw BadLength();
    }
    return word.length();
}

int main() {
    string word;
    int forbiddenLength;
    
    cout << "Введите запретную длину: ";
    cin >> forbiddenLength;

    while(true) {
        cout << "Введите слово: ";
        cin >> word;
        try {
            int lengthOfWord = takeLength(word, forbiddenLength);
            cout << "Длина слова \"" << word << "\" равна " << lengthOfWord << endl;
        } catch (const BadLength& e) {
            cout << e.what() << " Goodbye!" << endl;
            break;
        }
    }
    return 0;
}
*/

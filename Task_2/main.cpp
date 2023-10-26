// Задача 2. Счета
// Описание
// Создайте структуру для хранения информации о банковском счёте. Она должна 
//  хранить номер счёта (целое число), имя владельца (строка) и количество денег 
//  на счету (дробное число).it
// Создайте функцию для изменения баланса счёта. Функция должна принимать экземпляр структуры банковского счёта и новую сумму.
// Попросите пользователя заполнить поля экземпляра структуры,
//сообщить новый баланс счёта и выведите обновлённый экземпляр структуры на консоль.

// Пример работы программы
// Введите номер счёта: 123456789
// Введите имя владельца: Андрей
// Введите баланс: 5000
// Введите новый баланс: 6000
// Ваш счёт: Андрей, 123456789, 6000

#include <iostream>
#include <string> 

using namespace std; 


//
struct account {
    int accNum;
    string first_name;
    double count; 

};


//
void changeBalance (account &acc, int &nCash)
{
    acc.count = nCash;
}



int main(){
    
    setlocale (LC_CTYPE, "Ru");
    
    account userAccount;
    int nCash;

    cout<< "Введите номер счета : "; 
    cin >> userAccount.accNum; 
    cout<< '\n'<< "Введите имя: ";
    cin >> userAccount.first_name;
    cout<< '\n'<< "Введите баланс: ";
    cin >> userAccount.count;
    cout<< '\n'<< "Введите новый баланс: ";
    cin >> nCash;
    
    changeBalance(userAccount,nCash);
     cout<< '\n'<< "Ваш счет: " <<userAccount.first_name << ", " << userAccount.accNum << ", " << userAccount.count;


return 0; 
    



}
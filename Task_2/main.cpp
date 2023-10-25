#include <iostream>
#include <string>

using namespace std;

struct account {
    int accNum;
    string first_name;
    double count;
};

void changeBalance(account &acc, double newBalance) {
    acc.count = newBalance;
}

int main() {
    account userAccount;

    cout << "Введите номер счета: ";
    cin >> userAccount.accNum;

    cout << "Введите имя: ";
    cin >> userAccount.first_name;

    cout << "Введите баланс: ";
    cin >> userAccount.count;

    double newBalance;
    cout << "Введите новый баланс: ";
    cin >> newBalance;

    changeBalance(userAccount, newBalance);

    cout << "Ваш счет: " << userAccount.first_name << ", " << userAccount.accNum << ", " << userAccount.count << endl;

    return 0;
}


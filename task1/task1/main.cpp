#include <iostream>
#include <string>
using namespace std;

enum class Month {
    Январь = 1,
    Февраль,
    Март,
    Апрель,
    Май,
    Июнь,
    Июль,
    Август,
    Сентябрь,
    Октябрь,
    Ноябрь,
    Декабрь
};

int main() {
    while (true) {
        int monthNum;
        cout << "Введите номер месяца (или 0 для выхода): ";
        cin >> monthNum;
        
        if (monthNum == 0) {
            cout << "До свидания!" << endl;
            break;
        } else if (monthNum < 1 || monthNum > 12) {
            cout << "Неправильный номер!" << endl;
        } else {
            Month month = static_cast<Month>(monthNum);
            switch (month) {
                case Month::Январь:
                    cout << "Январь" << endl;
                    break;
                case Month::Февраль:
                    cout << "Февраль" << endl;
                    break;
                case Month::Март:
                    cout << "Март" << endl;
                    break;
                case Month::Апрель:
                    cout << "Апрель" << endl;
                    break;
                case Month::Май:
                    cout << "Май" << endl;
                    break;
                case Month::Июнь:
                    cout << "Июнь" << endl;
                    break;
                case Month::Июль:
                    cout << "Июль" << endl;
                    break;
                case Month::Август:
                    cout << "Август" << endl;
                    break;
                case Month::Сентябрь:
                    cout << "Сентябрь" << endl;
                    break;
                case Month::Октябрь:
                    cout << "Октябрь" << endl;
                    break;
                case Month::Ноябрь:
                    cout << "Ноябрь" << endl;
                    break;
                case Month::Декабрь:
                    cout << "Декабрь" << endl;
                    break;
            }
        }
    }

    return 0;
}


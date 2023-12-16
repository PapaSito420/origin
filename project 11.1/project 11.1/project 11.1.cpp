#include "Greeter.h"
#include <iostream>

using namespace std;


int main()
{
    Greeter pl;
    string name;
    cout << "Enter, your name: ";
    cin >> name;
    cout << pl.sayhi(name);
}


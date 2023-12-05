
#include <iostream>
#include<string>
#include "/Programs/Git/origin/GreeterLib/GreeterLib/Greed.h"

using namespace std;


int main()
{
    Greeter G;
    string name;

    cout << "Enter your name :";
    cin >> name;
    cout << G.sayhi(name);


}


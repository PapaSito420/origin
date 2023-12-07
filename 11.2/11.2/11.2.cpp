#include <iostream>
#include <string>
#include <Windows.h>
#include "Greed.h"
using namespace std;

int main() {
	Greed g;
	string name;
	cout << "Enter your name:";
	cin >> name;
	cout << g.back(name);
}
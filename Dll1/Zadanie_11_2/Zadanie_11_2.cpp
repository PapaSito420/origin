#include <iostream>
#include <string>
#include <Windows.h>
#include "G_L.h"
using namespace std;

int main() {
	Greed g;
	string name;
	cout << "Enter your name:";
	cin >> name;
	cout << g.back(name);
}
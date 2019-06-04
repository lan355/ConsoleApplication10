#include "pch.h"
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	cout << "Введите предложение:";
	getline(cin, s);

	size_t a = s.find(' ');
	size_t b = s.rfind(' ');

	string w1 = s.substr(0, a);
	string w2 = s.substr(b + 1);

	s.replace(b + 1, s.length() - b, w1);
	s.replace(0, a, w2);

	cout << s << endl;
}



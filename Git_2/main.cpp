// main.cpp Главный файл с функцией запуска и оператором switch
#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	double a, b;
	cout << "Please, enter your num A" << endl;
	cin >> a;
	cout << "Please, enter your num B" << endl;
	cin >> b;
	cout << endl;

	int choice = 0;
	cout << "Please, select an operation." << endl;
	cout << "1 - addition(A+B)" << endl;
	cout << "2 - \" +\"" << endl;
	cout << "3 - \" +\"" << endl;
	cout << "4 - \" +\"" << endl;
	cin >> choice;

	double result = 0;

	switch (choice)
	{
	case 1:
		result = add_func(a, b);
		cout << "The result is: " << result << endl; 
		break;
	case 2:
		cout << "This feature is currently unavailable" << endl;
		break;
	case 3:
		cout << "This feature is currently unavailable" << endl;
		break;
	case 4:
		cout << "This feature is currently unavailable" << endl;
		break;
	}
	return 0;
}
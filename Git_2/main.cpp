// main.cpp Главный файл с функцией запуска и оператором switch
// version 1.2
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
	cout << "2 - subtraction(A-B)" << endl; //subtraction
	cout << "3 - multiplication(A*B)" << endl;
	cout << "4 - division(A/B)" << endl << endl;
	cin >> choice;

	double result = 0;

	switch (choice)
	{
	case 1:
		result = add_func(a, b);
		cout << "The result is: " << result << endl; 
		break;
	case 2:
		cout << "The result is: " << subtract_func(a, b) << endl;
		break;
	case 3:
		cout << "The result is: " << multiply_func(a,b) << endl;
		break;
	case 4:
		result = divide_func(a, b);
		cout << "The result is: " << result << endl;
		break;
	}
	return 0;

}
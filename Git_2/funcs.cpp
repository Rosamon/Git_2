#include "funcs.h"
#include <iostream>
using namespace std;

//first function - addition
double add_func(double a, double b) {
	double res = a + b;
	return res;
};

//second function - division 
double divide_func(double a, double b) {
	if (b == 0) {
		cout << "The num B can not be 0!" << endl;
	}
	else {
		double res = a / b;
		return res;
	}
};

//third function - multiplication
double multiply_func(double a, double b)
{
	return a * b;
}

//fourth function - subtraction
double subtract_func(double a, double b)
{
	return (a - b);
}
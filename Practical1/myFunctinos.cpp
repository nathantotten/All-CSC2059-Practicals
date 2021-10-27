#include "myFunctions.h"
#include <iostream>

using namespace std;

int divideXbyY( int x, int y )
{
	if (y == 0)
	{
		cout << "Division by zero error" << endl;
	}
	else {
		return x / y;
	}
}

int iAdd( int x, int y)
{
	return x + y;
}

double divideXbyY(double x, double y)
{
	if (y == 0.0)
	{
		cout << "Division by zero error" << endl;
	}
	else {
		return x / y;
	}
}

double calc(double a, char op, double b)
{
	if (op == '+')
	{
		return a + b;
	}
	else if (op == '-')
	{
		return a - b;
	}
	else if (op == '*')
	{
		return a * b;
	}
	else if (op == '/')
	{
		if (b == 0.0) {
			cout << "Division by zero error!" << endl;
		}
		return a / b;
	}
	else if (op == '^')
	{
		return pow(a, b);
	}
}
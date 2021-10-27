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
	switch (op) {
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case '/':
		return divideXbyY(a, b);
		break;
	default:
		cout << "Unknown operator: " << op << endl;
		exit(0);  // no appropriate double-precision number to return here, so terminate the program
	}
}
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
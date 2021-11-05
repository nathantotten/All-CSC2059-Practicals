#include <iostream>

using namespace std;

double* pointerCubeX(double x)
{
	double cube = x * x * x;
	return &cube;
}

int main()
{
	double* pointerX = pointerCubeX(3.0);

	cout << *pointerX << "\n";

	return 0;
}
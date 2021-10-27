#include "myFunctions.h"
#include <iostream>
#include <ctime>
using namespace std;



int main1()
{
	// read N, R
	int N, R;
	cout << "Input N, R: the number and range of random numbers to generate" << endl;
	cin >> N >> R;

	// set the initial point for generating the random numbers using current time
	// so each run will give you a different sequence of random numbers
	// need to #include <ctime>
	srand(time(0));

	// generate N random numbers using rand() in the range [0, R-1] inclusive, and calculate their sum
	int sum = 0;
	for (int n = 0; n < N; n++) {
		int rn = rand() % R;
		cout << rn << endl;
		sum += rn;
	}
	// output the average of these numbers
	cout << "average = " << sum / N << endl;

	/* implement the above loop operation by using while, and do...while loops */
	int n = N;
	sum = 0;
	while (n-- > 0) {
		int rn = rand() % R;
		cout << rn << endl;
		sum += rn;
	}
	cout << "average = " << sum / N << endl;

	n = N;
	sum = 0;
	do {
		int rn = rand() % R;
		cout << rn << endl;
		sum += rn;
	} while (--n > 0);
	cout << "average = " << sum / N << endl;

	return 0;
}

int main()
{
	int repetitions = 3;
	while (repetitions-- > 0)
	{
		cout << repetitions << "\n";
		//repetitions--;
	}

	cout << "-----------------------" << "\n";

	repetitions = 3;

	do {
		cout << repetitions << "\n";
	}
	while (repetitions-- > 0);

	return 0;

}

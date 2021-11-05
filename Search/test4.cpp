#include <iostream>
#include <time.h>
using namespace std;



int search(char* pchs, int size, char key)
{
	int count = 0;
	//Using array indexing to cycle through the array
	for (int n = 0; n < size; n++) {
		//For each item in the array, check the item at the index of the array to see if it matches the key
		//If yes, increase count by one.
		if (pchs[n] == key) 
			count++;
	}

	count = 0;
	//Using pointer arithmetic to cycle through the array.
	//For each value of n, up to n = size-1, if the next dereferenced value of pchs
	// is equal to the key, increase count by 1. 
	//For each iteration of the loop, *pchs is incremented by 1 to compare the next item in the array that 
	// pchs points to.
	for (int n = 0; n < size; n++) {
		if (*pchs++ == key)
			count++;
	}

	return count;
}

int main()
{
	srand(time(NULL));

	cout << "Set the cahr-string size: ";
	int size = 0;
	cin >> size;

	cout << "Set key (a-z) to be searched for: ";
	char key = 0;
	cin >> key;

	//Allocate the array
	char* pchs = new char[size];
	if (pchs != NULL) {
		//Populate the array with random alphabetic letters.
		for (int n = 0; n < size; n++) {
			pchs[n] = 97 + rand() % 26;
			cout << pchs[n] << " ";

		}
		cout << endl;

		//search
		cout << "Occurences = " << search(pchs, size, key) << "\n";
	}

	delete[] pchs;

	return 0;
}

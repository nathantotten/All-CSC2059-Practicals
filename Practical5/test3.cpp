#include "List.h"
#include "ListNode.h"
#include <fstream>
#include <iostream>
#include <ctime>

using namespace std;

// maximum size of array list e.g. 2^20
constexpr int Max_ListSize = 262144;

// insert an item at position p, into an array list with size items pointed by List
template<typename T>
T* insert(T* list, int& size, int p, T item)
{
	if (p < 0 || p > size) {
		cout << "Unable to insert at " << p << endl << endl;
		return NULL;
	}
	else if (size >= Max_ListSize) {
		cout << "list full" << endl << endl;
		return NULL;
	}

	for (int i = size - 1; i >= 0; i--)
		list[i + 1] = list[i];
	list[p] = item;
	size++;

	return list;
}

// remove an item at position p, from an array list with size items pointed by List
template<typename T>
T remove(T* list, int& size, int p)
{
	if (p >= 0 && p < size) {
		T item = list[p];
		for (int i = p + 1; i < size; i++)
			list[i - 1] = list[i];
		size--;
		return item;
	}
	else {
		cout << "Unable to remove at position" << p << endl;
		exit(1);
	}
}

bool isWord(string item) {
	int i = 0;
	while (i<item.size() && (isupper(item[i]) || islower(item[i])))
		i++;
	return (i > 0 && i == item.size());
}

// time deletion operations
int main()
{
	cout << "hello" << "\n";
	/* array list */
	string* aList = new string[Max_ListSize];
	int size = 0;

	// load corpus
	ifstream fi("corpus.txt");
	string item;
	int p = 0;
	while (fi >> item) {
		if (isWord(item))
			insert(aList, size, p++, item);
	}
	fi.close();

	//time deletion 
	time_t startTime = clock();
	for (int i = 0; i < 100; i++) {
		int p = 0;		// p = size/2, size-1 for delete at middle, end
		remove(aList, size, p);
	}

	time_t endTime = clock();
	cout << (endTime - startTime) / 1000.0 << endl;

	/* linked list 
	List<string> lList;

	// load corpus
	fi.open("corpus.txt");
	while (fi >> item) {
		if (isWord(item))
			lList.insert_end(item);
	}
	fi.close();

	//time deletion
	startTime = clock();
	for (int i = 0; i < 100; i++) {
		int p = 0; //p = lList.size()/2, lList.size()-1 for deletion at middle, end
		lList.remove(p);
	}
	endTime = clock();
	cout << (endTime - startTime) / 1000.0 << endl;
	*/

	return 0;
}



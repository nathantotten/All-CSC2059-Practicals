#include "List.h"
#include "ListNode.h"
#include <iostream>

using namespace std;

int main() {

	// create an alphabet list
	List<char>* pChList;
	for (int i = 0; i < 26; i++)
		pChList->insert_end(97 + i);

	// print chlist
	pChList->print();

	// remove nodes from 22-25
	if (pChList->remove(22, 25))
		pChList->print();

	//remove nodes from 0-3
	if (pChList->remove(0, 3))
		pChList->print();

	// remove nodes from 5-10
	if (pChList->remove(5, 10))
		pChList->print();

	return 0;
}
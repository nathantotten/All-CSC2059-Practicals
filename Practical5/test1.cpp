#include "List.h"
#include "ListNode.h"
#include <iostream>

using namespace std;

int main1() {

	// create an alphabet list
	List<char> chList;
	for (int i = 0; i < 26; i++)
		chList.insert_end(97 + i);

	// print chlist
	chList.print();

	// remove nodes from 22-25
	if (chList.remove(22, 25))
		chList.print();

	//remove nodes from 0-3
	if (chList.remove(0, 3))
		chList.print();

	// remove nodes from 5-10
	if (chList.remove(5, 10))
		chList.print();

	return 0;
}
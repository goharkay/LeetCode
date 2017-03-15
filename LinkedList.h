/*
 * LinkedList.h
 *
 *  Created on: Mar 6, 2017
 *      Author: ramesh
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
using namespace std;

class LinkedList{

// private methods/variables
private:
	// make a node
	struct Node{
		int value;
		Node *next;
	};
	Node *head; // just a pointer to the first node

	// add some public methods to manipulate the linkedlist
public:
	//constructor
	LinkedList();
	void pushValue(int x);
	int popValue();
	int getsize();
	static LinkedList addTwo(LinkedList l1, LinkedList l2);

};

/*
int main(){
	LinkedList mylist;
	mylist.pushVal(5);
	mylist.pushVal(10);
	mylist.pushVal(20);

	cout << mylist.popVal() << endl;

	mylist.pushVal(40);

	cout << mylist.popVal() << endl;
	cout << mylist.popVal() << endl;
	cout << mylist.popVal() << endl;



}
*/

#endif /* LINKEDLIST_H_ */

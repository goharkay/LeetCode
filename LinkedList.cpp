/*
 * LinkedList.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: ramesh
 */

#include "LinkedList.h"

//constructor
LinkedList::LinkedList(){
	head = NULL;
}

// Add item to LinkedList
void LinkedList::pushValue(int x){
	Node *n = new Node();
	n->value = x;
	n->next = head;

	head = n;
}

// Remove item from LinkedList
int LinkedList::popValue(){
	Node *n = head;
	int ret = n->value;

	head = head->next;
	delete n;
	return ret;
}

// calculate the size
int LinkedList::getsize(){
	int count = 0;
	Node *n = head;
	while (n != NULL){
		count++;
		n = n->next;
	}
	return count;
}

// add two linked list together
LinkedList LinkedList::addTwo(LinkedList l1, LinkedList l2){
	LinkedList l3;
	int k1 = l1.getsize();
	int k2 = l2.getsize();
	for (int i = 0; i < k1 || i < k2; i++ ){
		l3.pushValue( (l1.popValue() + l2.popValue()) % 10 );
	}
	return l3;
}


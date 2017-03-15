/*
 * main.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: ramesh
 */

#include <iostream>
#include <string.h>
#include "LinkedList.h"
#include "Solution.h"
using namespace std;

int main(){

	/*
	//================== LinkedList test
	LinkedList mylist;
	int k;
	mylist.pushValue(5);
	cout << mylist.size() << endl;
	mylist.pushValue(10);
	cout << mylist.size() << endl;
	mylist.pushValue(20);
	cout << mylist.size() << endl;
	k = mylist.popValue();
	cout << k << endl;
	mylist.pushValue(40);
	cout << mylist.popValue() << endl;
	cout << mylist.popValue() << endl;
	k = mylist.popValue();
	cout << k << endl;
	k = mylist.popValue();
	cout << k << endl;
	//================= end of LinkedList
	*/

	/*
	//===================== Two sum
	vector<int> myVec = {2, 7, 11, 15};
	int target = 9;
	vector<int> myV(2);
	myV = twoSum(myVec, target);
	cout << "The v is " << myV[0] << myV[1] << endl;
	//================== end of twosum
	*/

	// ==================== Add two linked lists
	/*
	LinkedList l1, l2, l3;
	l1.pushValue(2);
	l1.pushValue(4);
	l1.pushValue(3);
	// now l2
	l2.pushValue(5);
	l2.pushValue(6);
	l2.pushValue(4);

	l3 = LinkedList::addTwo(l1,l2);

	cout << l3.popValue() << endl;
	cout << l3.popValue() << endl;
	cout << l3.popValue() << endl;
	*/

	/*
	// Finding length of longest substring without repetition
	string s = "cabaccldkj";
	int lonlen = lengthOfLongestSubstring(s);
	cout << lonlen << endl;
	*/

	/*
	// Find median of single sorted array
	vector<int> a = {1, 2};
	double md = findMedianSorted(a);
	printf("Median = %0.3f \n", md);
	*/

	// Find median of single sorted array
	vector<int> a1 = {1,1};
	vector<int> a2 = {1,2};
	double m12 = findMedianSortedArrays(a1, a2);
	printf("Median = %0.2f\n", m12);

}

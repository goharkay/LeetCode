/*
 * Solution.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: ramesh
 */
#include <vector>
#include "Solution.h"
#include <iostream>
using namespace std;


// Two Sum
vector<int> twoSum(vector<int>& nums, int target)
{
	int vSize = nums.size();
	for (int i = 0; i < vSize; i++ ){
		for (int j = i+1; j < vSize; j++){
			if (nums[i] + nums[j] == target){
				return {i,j};
			}
		}
	}
	return {-1, -1};
} // end of twoSum

// Add LinkedLists
/*
LinkedList* addTwoNumbers(LinkedList* l1, LinkedList* l2){
	LinkedList out;
	int v1, v2;
	while(true){
		v1 = l1->popValue();
		v2 = l2->popValue();
		if (v1 == NULL || v2 == NULL)
			break;
		else
			out.pushValue( l1->popValue + l2->popValue());
	}
	return out;
}
*/

/* Given a string, find the length of the longest substring without
 * repeating characters eg.
 * "abcabcbb" --> "abc" --> length 3
 * "bbbbb" --> "b" --> length 1
 * "pwwkew" --> "wke" (not "pwke") --> length 3
 */

int lengthOfLongestSubstring(string s)
{
	string maxStr, curStr;
	int maxLen, curLen;
	maxLen = 0;
	int visited [127];
	int slen = s.length();
	//maxStr += s[0];
	//visited[int(s[0])] = 1;
	for (int i=0; i<slen; i++)
	{
		fill_n(visited,127, 0);
		curStr = s[i];
		visited[int(s[i])] = 1;
		for (int j=i+1; j<slen; j++)
		{
			if (visited[int(s[j])] == 1)
				break;
			else
			{
				curStr += s[j];
				visited[int(s[j])] = 1;
			}
		}
		curLen = curStr.length();
		maxLen = maxStr.length();
		if (curLen > maxLen)
			maxStr = curStr;
	}
	maxLen = maxStr.length();
	cout << maxStr << endl;
	return maxLen;
}

vector<int> myBubbleSort(vector<int>& inp)
{
	int len = inp.size();
	int newlen;
	do
	{
		newlen = 0; // set it 0 here, we'll change it once we go inside loop
		for (int i = 1; i < len; i++)
		{
			if(inp[i-1] > inp[i]) // swap and change newlen value
			{
				int tmp = inp[i-1];
				inp[i-1] = inp[i];
				inp[i] = tmp;
				newlen = i;
			}
		}
		len = newlen;
	} while(newlen != 0);
	return inp;
}

double findMedianSorted(vector<int>& myVec)
{
	double median;
	int mp;
	int mySize = myVec.size();
	mp = mySize/2; // this is going to be int
	if (mySize %2 == 0) // mySize is even
	{
		median = (double(myVec[mp-1]) + double(myVec[mp])) /2;
	}
	else
	{
		median = double(myVec[mp]);
	}
	return median;
}




double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	nums1.insert(nums1.end(), nums2.begin(), nums2.end());
	nums1 = myBubbleSort(nums1);
	double med = findMedianSorted(nums1);
	return med;

}















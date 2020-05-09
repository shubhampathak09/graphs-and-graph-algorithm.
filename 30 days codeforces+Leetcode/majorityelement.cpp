
/*

Given an array of size n, find the majority element. The majority element is the element that appears more than ? n/2 ? times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2

*/

#include<bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>&nums)
{
	
	unordered_map<int,int>m;
	
	for(int i=0;i<nums.size();i++)
	{
		m[nums[i]]++;
	}
	for(auto i:m)
	if(i.second>nums.size()/2)
	return i.first;
	
	
 } 
 
 
 int main()
 {
 	vector<int>v{3,2,3};
 	
 	cout<<majorityElement(v);
 	
 }

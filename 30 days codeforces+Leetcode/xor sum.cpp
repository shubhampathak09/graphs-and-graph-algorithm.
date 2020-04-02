// xor sum in array

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int nums[]={2,2,3,3,4,1,4};
	int size=sizeof(nums)/sizeof(nums[0]);
	int result=0;
	for(int i=0;i<size;i++)
	result^=nums[i];
	
	cout<<result;
}

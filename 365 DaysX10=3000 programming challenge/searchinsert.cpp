#include<bits/stdc++.h>

using namespace std;

// search insertposition

int searchinsert(vector<int>nums,int key)
{
	int low=0;
	int high=nums.size()-1;
	//1 3 5 6
	while(low<high)
	{
		int mid=low+ (high-low)/2;
		if(nums[mid]==key)
		return mid;
		else if(nums[mid]>key)
		{
			high=mid-1;
		}
		else
		low=mid+1;
	}
	
	if(low==high&&low==0)
	return low;
	
	if(low==high&&low==nums.size()-1)
	return low+1;
	
	return low;
}


int main()
{
// sorted array : 	
	vector<int>nums={1,3,5,6};
    cout<<searchinsert(nums,5);  //2
    cout<<endl;
	cout<<searchinsert(nums,4);  //2
	
	cout<<endl;
	cout<<searchinsert(nums,7)<<endl;  //4
	
	cout<<searchinsert(nums,0);	   //0
	
	cout<<endl;
	cout<<searchinsert(nums,2);
}

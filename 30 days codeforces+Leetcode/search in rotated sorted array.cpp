#include<bits/stdc++.h>

using namespace std;


// int a[]={2,3,4,5,6,7,8}
// after 4 rot a[]={5,6,7,8,2,3,4};
// search for 3 return 5 as index


int searchRotated(vector<int>&a,int target)
{
	int n=a.size();
	int low=0;
	int high=n-1;
	if(n==0)
	return -1;
	int first=a[0];
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		int value=a[mid];
		if(value==target)
		return mid;
		
		bool value_bigger=a[mid]>=first;
		bool target_bigger=target>=first;
		
		if(value_bigger==target_bigger)
		{
			if(value<target)
			low=mid+1;
			else
			high=mid-1;
		}
		else
		{
		
		if(value_bigger)
		{
			low=mid+1;
		}
		else
		high=mid-1;
	}
	}
	
	return -1;
}

int main()
{
	
	vector<int>a{5,6,7,8,2,3,4};
	
	int target=3;
	
	cout<<searchRotated(a,8);
	
}

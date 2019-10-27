
//given a sorted array 
//you have to find a number with some given property
// let say the property is find first numbers that is greater than 7 in an array


#include<bits/stdc++.h>

using namespace std;


bool isgreaterthan7(int n)
{
	if(n>7)
	return true;
	else
	return false;
}

int main()
{
	//int a[]={3,4,5,1,2,8,9,12,34,56};
	
	int a[]={1,2,3,4,5,8,9,12,34,56};
	
	int n=sizeof(a)/sizeof(a[0]);
	int left=0,right=n-1;
	
	while(left<right)
	{
		int mid=left+ (right-left)/2;
		
		if(isgreaterthan7(a[mid]))
		{
			right=mid;
		}
		else
		{
			left=mid+1;
		}
	}
	
	cout<<a[left];
}

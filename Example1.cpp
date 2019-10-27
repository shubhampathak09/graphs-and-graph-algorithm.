#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int left,int right,int x)
{
	if(right>=left)
	{
		int mid=left+right-left/2;
		if(a[mid]==x)
		return mid;
		if((a[mid]>x))
		return binarysearch(a,left,mid-1,x);
		else
		return binarysearch(a,mid+1,right,x);
		
	}
	return -1;
}

int main()
{
	int a[]={2,4,7,9,10,50};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<binarysearch(a,0,n-1,4);
}

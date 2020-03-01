#include<bits/stdc++.h>
using namespace std;


int max(int a,int b)
{
	return a>b ? a: b;
}

int cutrod(int arr[],int size)
{
	
	if(size<=0)
	return 0;
	
	int MAX_VAL=INT_MIN;
	for(int i=0;i<size;i++)
	{
		MAX_VAL=max(MAX_VAL,arr[i]+cutrod(arr,size-i-i));
	}
	
	return MAX_VAL;
}

int main()
{
	int a[]={1,2,3};
	
	int n=3;
	
	cout<<cutrod(a,n);
	
}

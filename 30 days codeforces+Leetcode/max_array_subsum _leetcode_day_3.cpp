#include<bits/stdc++.h>

using namespace std;


int maxarraysubsum(int a[],int n)
{
	
	int b=a[0]; // current
	int c=a[0];  // so_far
	
	for(int i=1;i<n;i++)
	{
		b=max(a[i],b+a[i]);
		c=max(b,c);
	}
	return c;
}

int main()
{
	int a[]={1,2};
	
	int size=sizeof(a)/sizeof(a[0]);
	
	cout<<maxarraysubsum(a,size);
}

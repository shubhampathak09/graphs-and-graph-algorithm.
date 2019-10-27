#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={5,9,7,6};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int sum=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sum+=sum + a[i] ^ a[j];
		}
	}
	
	cout<<sum;
	
}

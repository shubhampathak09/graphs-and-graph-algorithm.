// kandanes algorithm

#include<bits/stdc++.h>

using namespace std;


int main()
{
	
	int a[]={-2,-5,6,-2,-3,1,5,-6};
	int sum=0;
	int best=0;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		
		sum=max(a[i],a[i]+sum);
		best=max(best,sum);
		
	}
	
	cout<<best;
}

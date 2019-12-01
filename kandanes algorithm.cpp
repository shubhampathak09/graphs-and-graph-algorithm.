
#include<bits/stdc++.h>
using namespace std;

int max_sum(int a[],int n)
{
	int curr_sum=a[0];
	int max_up_now=a[0];
	
	for(int i=1;i<n;i++)
	{
		curr_sum=max(a[i],a[i]+curr_sum);
		max_up_now=max(curr_sum,max_up_now);
	}
	return max_up_now;
	
}

int main()
{
	int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3}; 
   int n = sizeof(a)/sizeof(a[0]); 
   cout<<max_sum(a,n);
}

#include<bits/stdc++.h>
using namespace std;


int printk(int a[],int n,int k)
{
	
	int ans=0;
	int nx=k;
	for(int i=0;i<n;i++)
	{
		if(a[i]==nx)
		{
			nx--;
			if(nx==0)
			{
				ans++;
				nx=k;
			}
		}
		else
		{
			nx=k;
		}
	}
	return ans;
}
int main()
{
	int a[]={6,5,3,4,2,1,2,1,0,3,2,1,0,2,3,0,2,1,0};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	int k=2;
	
	cout<<printk(a,n,k);
}

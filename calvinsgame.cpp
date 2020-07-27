#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	return a > b ? a : b;
}

int main()
{
int n,k;
cin>>n>>k;

long long a[n];
for(int i=0;i<n;i++)
cin>>a[i];
long long forward[n],backward[n];
	
for(int i=k;i<n;i++)
{
	if(i==k)
	forward[i]=0;
	else if(i==k+1)
	forward[i]=a[i];
	else
	forward[i]=max(forward[i-1]+a[i],forward[i-2]+a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
		backward[i]=0;
		else if(i==1)
		backward[i]=a[i-1];
		else
		backward[i]=max(backward[i-1]+a[i-1],backward[i-2]+a[i-2]);
		}
		int ans=INT_MIN;
		for(int i=k;i<n;i++)
		{
			ans=max(ans,forward[i]+backward[i]);
			}
			cout<<ans;	
}



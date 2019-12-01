//binary querries

#include<bits/stdc++.h>
using namespace std;


int main()
{

int n,q;
cin>>n>>q;

int a[n];
for(int i=1;i<=n;i++)
cin>>a[i];

while(q>0)
{
	int m;
	int l,r,x;
	cin>>m;
	
	switch(m)
	{
		case 1:
			cin>>x;
			a[x]=a[x]^1;
			q--;
			break;
			
		case 0:
			cin>>l>>r;
			if(a[r]==0)
			cout<<"even";
			else
			cout<<"odd";
			q--;
			break;
	}
	
	}	
	
}

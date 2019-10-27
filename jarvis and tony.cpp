#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int b[n];
	for(int i=1;i<=n;i++)
	cin>>b[i];
	
	int a[n];
	
	
	
	for(int k=1;k<=n;k++)
	a[k]=k;

int sum=a[1]^b[1];

for(int i=2;i<=n;i++)
sum^=a[i]^b[i];

if(sum==0)
cout<<"yes";
else
cout<<"No";

	
	
// cout<<a[1]<<b[1];
}

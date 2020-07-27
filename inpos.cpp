
#include<bits/stdc++.h>
using namespace std;

int main()

{
	int n;
	cin>>n;
	int x,y,z;
	int ans=0;
	int temp=100000007;
	int pre=0;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		ans=ans+x;
		temp=min(temp,y+z);
		pre=max(pre,x+y+z);
	}
	ans+=temp;
	ans=max(ans,pre);
	cout<<ans;
}

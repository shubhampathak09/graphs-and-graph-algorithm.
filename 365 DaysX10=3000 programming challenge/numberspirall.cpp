// NUMBER SPIRAL

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int y,x;
	cin>>y>>x;
	int z=max(y,x);
	int z2=(z-1)*(z-1);
	
	int ans;
	
	if(z%2==0)
	{
		if(y==z)
		{
			ans=z2+x;
		}
		else
		{
			ans=z2+2*z-y;
		}
	}
	else
	{
		if(x==z)
		ans=z2+y;
		else
		ans=z2+2*z-x;
	}
	
	cout<<ans;
}

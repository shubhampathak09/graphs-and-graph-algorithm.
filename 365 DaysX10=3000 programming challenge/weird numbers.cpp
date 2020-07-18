#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	cout<<n<<"\t";
	while(n!=1)
	{
		if(n%2==0)
		{
		
		//cout<<n/2<<"\t";
		n=n/2;
	}
	else
	{
	   n=3*n+1;
	//	cout<<n<<"\t";
}
   cout<<n<<"\t";		
}

	}
//	cout<<1;


int main()
{
	solve();
	
}

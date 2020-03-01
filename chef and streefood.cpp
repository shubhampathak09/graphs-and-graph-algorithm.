#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	
	int ans=0;
	while(n--)
	{
		
		int stores;
		int population;
		int price;
		cin>>stores>>population>>price;
		
		ans=max(ans,(population/(stores+1))*price);
		
	}
	
	cout<<ans;
	
}

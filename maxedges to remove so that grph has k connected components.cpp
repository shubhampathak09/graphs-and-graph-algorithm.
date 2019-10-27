#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int n,m,k;
	
	cin>>n>>m>>k;
	int e=m;
	int u,v;
	while(m!=0)
	{
		
		cin>>u>>v;
		m--;
	}
	
	int maxedge=(n-k) *(n-k+1)/2;
	
	cout<<e-maxedge+1;
	
	
}

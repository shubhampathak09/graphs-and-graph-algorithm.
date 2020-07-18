// Repetitions

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	//ATCG;
	string s;
	cin>>s;
	int ans=1;
	int c=0;
	char l='A';
	for(auto x:s)
	{
		if(x==l)
		{
			c++;
			ans=max(ans,c);
		}
		else
		{
			l=x;
			c=1;
		}
		
	}
	cout<<ans;
 } 

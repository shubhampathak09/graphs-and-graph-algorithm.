#include<bits/stdc++.h>

using namespace std;


int solve(){
		int a,b,n;
	cin>>a>>b>>n;
	int cnt=0;
	while(max(a,b)<=n)
	{
		if(a<b)
		{
			a+=b;
		}
		else
		b+=a;
		
		cnt++;
	}
	return cnt;
}

int main()
{
	
		cout<<solve();
}

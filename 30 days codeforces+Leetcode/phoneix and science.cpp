#include<bits/stdc++.h>

using namespace std;



void solve()
{
	
	vector<int> v;
	
	int n;
	
	cin>>n;

    for(int i=1;i<=n;i*=2)
	{
		v.push_back(i);
		n-=i;
		
		}
		
		if(n>0)
		{
			v.push_back(n);
			sort(v.begin(),v.end());
			
			}
			
			cout<<v.size()-1<<endl;
			
			for(int i=1;(int)i<v.size();i++)
			cout<<v[i]-v[i-1]<<" ";	
}

int main()
{
	
	solve();
}

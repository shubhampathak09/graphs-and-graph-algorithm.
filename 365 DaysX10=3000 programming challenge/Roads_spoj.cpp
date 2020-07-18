
#include<bits/stdc++.h>
using namespace std;

#define INF 10000007;


void solve()
{
	
	int n,m,k;
	cin>>n>>m>>k;
	vector<vector<pair<int,pair<int,int>>>>g(n+1);
	int length;
	for(int i=0;i<m;i++)
	{
		
		int a,b,l,t;
		cin>>a>>b>>l>>t;
		g[a].push_back({b,{l,t}});   // vertex, length,toll
		
	}
	
	priority_queue<pair<pair<int,int>,int>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>>>pq;
    pq.push({{1,0},0});  // vertex,toll,length
    bool found =false;	
while(!pq.empty())
{
	pair<pair<int,int>,int> pa=pq.top();
	pq.pop();
    int u=pa.first.first;
	int tc=pa.first.second;
	length=pa.second;
	if(u==n)
	{
		found=true;
		break;
	}
	for(auto x: g[u])
	{
		int v=x.first;
		int nt=x.second.second;
		int len=x.second.first;
		if(tc+nt<=k)
		{
			pq.push({{v,tc+nt},length+len});
		}
	}
}

if(found==false)
cout<<-1; 

else
cout<<length;
	
}

int main()
{
	
	solve();
	
	
}

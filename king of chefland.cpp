// chefland anr roads
#include<bits/stdc++.h>
using namespace std;

#define oo 100000007
void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
	
	int n,m;
	cin>>n>>m;
	vector<vector<int>>g(n+1);
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	int dist[n+1];
	memset(dist,oo,sizeof(dist));
	int s,d;
	cin>>s>>d;
	dist[s]=0;
	priority_queue<int,vector<int>,greater<int>>pq;
	pq.push(s);	
	while(!pq.empty())
	{
		int u=pq.top();
		pq.pop();
		for(auto x:g[u])
		{
			 if(dist[u]+1<dist[x])
			 {
			 	dist[x]=dist[u]+1;
			 	pq.push(x);
			 }
			
		}
		}
		cout<<dist[d];	
	}
}

int main()
{
	
	solve();
}

#include<bits/stdc++.h>
using namespace std;
#define INF 1e9+7


void solve()
{
	
	int n,m;
	cin>>n>>m;
	vector<vector<pair<int,int>>>g(n+1);
	vector<int>dist(n+1);
	vector<int>prev(n+1);
	for(int i=1;i<=n;i++)
	prev[i]=-1;
	
	for(int i=1;i<=n;i++)
    dist[i]=INF;
	int src,dst;
	cin>>src>>dst;
	dist[src]=0;
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		g[a].push_back({a,c});
		g[b].push_back({b,c});
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({dist[src],src});
	while(!pq.empty())
	{
		int u=pq.top().second;
		pq.pop();
		for(auto x: g[u])
		{
			int dm=dist[u]+x.second;
			if(dm<dist[x.first])
			{
				dist[x.first]=dm;
				prev[x.first]=u;
				pq.push({dist[x.first],x.first});
			}
		}
		}
		int i=dst;	
		stack<int>s;
		s.push(i);
		while(i!=src)
		{
			s.push(prev[i]);
			i=prev[i];
		}
		while(!s.empty())
		{
			cout<<s.top();
			s.pop();
		}
}
int main()
{
	solve();
}

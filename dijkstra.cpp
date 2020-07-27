#include<bits/stdc++.h>
using namespace std;

#define INF 1e9+7

void solve()
{
	
	int n,m;
	vector<vector<pair<int,int>>>g(n+1);
	vector<int>dist(n+1);
	vector<int>path(n+1);
	for(int i=1;i<=n;i++)
    path[i]=-1;
//	memset(dist,INF,sizeof(dist));
    for(int i=1;i<=n;i++)
    dist[i]=INF;
	dist[1]=0;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		g[a].push_back({b,w});
		g[b].push_back({a,w});
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({0,1});
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
				path[x.first]=u;
		//		pq.push({dist[x.first],x.second});
			    pq.push({dist[x.first],x.first});
			}
		}
		
	}
	
	stack<int>s;
	int i=n;
	s.push(n);
	while(i!=1)
	{
		s.push(path[i]);
		i=path[i];
	}
	
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
//	cout<<dist[n];
}
int main()
{
	solve();
}

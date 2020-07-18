#include<bits/stdc++.h>
using namespace std;

#define INF 1e9+7


void algorithm()
{
	
	int n,m;
	cin>>n>>m;
	vector<vector<pair<int,int>>>g(n+1);
	vector<int>dist(n+1);
	//int cost=0;;
	int src=1;
	int dst;
	for(int i=1;i<=n;i++)
	dist[i]=INF;
	
	dist[src]=0;
	for(int i=0;i<m;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		g[a].push_back({b,w});
		g[b].push_back({a,w});
	}
	
	cin>>dst;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({src,dist[src]});
	while(!pq.empty())
	{
		int u=pq.top().first;
	   pq.pop();
		for(auto x: g[u])
		{
			if(x.second+dist[u]<dist[x.first])
			{
				dist[x.first]=x.second+dist[u];
				pq.push({x.first,dist[x.first]});
			}
			
		}
	}
	cout<<dist[dst];
}

int main()
{
	algorithm();
	
}

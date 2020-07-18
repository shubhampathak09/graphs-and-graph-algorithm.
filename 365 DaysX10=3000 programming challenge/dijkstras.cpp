#include<bits/stdc++.h>
using namespace std;


#define INF 1e9+7
void solve()
{
	
	int v,e;
	
	cin>>v>>e;
	
	vector<vector<pair<int,int>>>g(v);
	for(int i=0;i<e;i++)
	{
		int a,b,w;
		cin>>a>>b>>w;
		g[a].push_back({b,w});
		g[b].push_back({a,w});
	}
	
	int dist[v];
	for(int i=0;i<v;i++)
	{
		dist[i]==INF;
	}
	
	int src;
	cin>>src;
	dist[src]=0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({src,dist[src]});
	while(!pq.empty())
	{
		int u=pq.top().first;
		pq.pop();
		for(auto x: g[u])
		{
			if(dist[u]+x.second<dist[x.first])
			{
				dist[x.first]=dist[u]+x.second;
				pq.push({x.first,dist[x.first]});
			}
		}
	}
	
	for(int i=0;i<v;i++)
	{
		cout<<"distance of "<<i<<"from the source.. "<<src<<"is.."<<dist[i];
		cout<<endl;
	}
	
}


int main()
{
	
	solve();
}

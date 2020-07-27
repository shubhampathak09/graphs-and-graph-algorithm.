// EZIDJIKS

#include<bits/stdc++.h>
using namespace std;

#define INF 1e9+7

void solve()
{
	
	
	
	
	
		
		int v,k;
		cin>>v>>k;
		vector<vector<pair<int,int>>>g(v+1);
		vector<int>dist(v+1);
		for(int i=1;i<=v;i++)
		dist[i]=INT_MAX;
		
		for(int i=0;i<k;i++)
		{
			int a,b,w;
			cin>>a>>b>>w;
			g[a].push_back({b,w});
			g[b].push_back({a,w});
		}
		
	
		int src,dest;
		cin>>src>>dest;
		dist[src]=0;
			priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
		pq.push({src,dist[src]});
		while(!pq.empty())
		{
			pair<int,int>p=pq.top();
			pq.pop();
			int u=p.first;
			for(auto x:g[u])
			{
				int dm=dist[u]+x.second;
				if(dm<dist[x.first])
				{
					dist[x.first]=dm;
					pq.push({x.first,dist[x.first]});
				}
			}
		}
	/*	if(dist[dest]==INF)
		cout<<-1;
	 */		
     cout<<dist[dest];

}


int main()
{
	solve();
}

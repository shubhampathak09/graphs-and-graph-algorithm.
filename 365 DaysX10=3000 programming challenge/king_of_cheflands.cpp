
#include<bits/stdc++.h>
using namespace std;

#define INF 100000007

void solve()
{
	
	int v,e;
	cin>>v>>e;
	vector<vector<pair<int,int>>>g(v+1);
	vector<int>dist(v+1);
	for(int i=1;i<=v;i++)
	dist[i]=INF;
	
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back({b,0});
		g[b].push_back({a,1});
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
		for(auto x:g[p.first])
		{
			int dm=x.second+dist[p.first];
			if(dm<dist[x.first])
			{
				dist[x.first]=dm;
				pq.push({x.first,dist[x.first]});
			}
		}
		
		}
		if(dist[dest]==INF)
		cout<<-1;
		else
		cout<<dist[dest];	
}

int main()
{
	solve();
}


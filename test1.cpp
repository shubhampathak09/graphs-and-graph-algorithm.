#include<bits/stdc++.h>
using namespace std;

#define INF 100000007

void solve()
{
	int v,e;
	cin>>v>>e;
	vector<vector<pair<int,int>>>g(v+1);
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].push_back({b,0});
		g[b].push_back({a,1});  // wy this special condtion on weights
		
	}
	int dist[v+1];
	memset(dist,INF,sizeof(dist));
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	int s,d;
	cin>>s>>d;
	dist[s]=0;
	pq.push({s,dist[s]});
	while(!pq.empty())
	{
		int u=pq.top().first;
		pq.pop();
		for(auto x: g[u])
		{
			int ds=x.second+dist[u];
			if(ds<dist[x.first])
			{
				dist[x.first]=ds;
				pq.push({x.first,dist[x.first]});
			}
		}
	}
	
	if(dist[d]==INF)
	cout<< -1;
	
	cout<<dist[d];
}

int main()
{
	solve();
}

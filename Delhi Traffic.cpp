#include<bits/stdc++.h>
using namespace std;

#define INF 1e9+7

int main(){
	
	int s,d;
	cin>>s>>d;
	int n,m;
	cin>>n>>m;
	vector<int>time(n+1);
	for(int i=1;i<n+1;i++)
	cin>>time[i];
	vector<vector<pair<int,int>>>g(n+1);
	vector<int>dist(n+1);
	for(int i=1;i<=n;i++)
	{
		dist[i]=INF;
	}
	dist[s]=0;
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		g[a].push_back({b,c});
		g[b].push_back({a,c});
		
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({dist[s],s});
	while(!pq.empty()){
		
		int u=pq.top().second;
		pq.pop();
		for(auto x: g[u])
		{
			int dm=dist[u]+x.second;
			
			if(dm%time[x.first]==0||time[x.first]==0);
			else
			{
				dm=((dm/time[x.first])+1)*dm;
			}
			
			if(dm<dist[x.first])
			{
				dist[x.first]=dm;
				pq.push({dist[x.first],x.first});
			}
		}
	}
	cout<<dist[d];
	
}


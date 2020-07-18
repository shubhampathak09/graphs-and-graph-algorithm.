#include<bits/stdc++.h>
using namespace std;

#define INF 1e9+7

void dijkstras(int source,vector<vector<pair<int,int>>>&v,vector<int>&distance)
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	distance[source]=0;
	pq.push({source,distance[source]});
	while(!pq.empty())
	{
		pair<int,int>p=pq.top();
		pq.pop();
		int u=p.first;
		for(auto x:v[u])
		{
			int dm=x.second+distance[u];
			if(dm<distance[x.first])
			{
			 distance[x.first]=dm;
			 pq.push({x.first,distance[x.first]});
			}
		}
	}
	
}

void solve()
{
	//vector<int>dis(10002,INF);
	//vector<int>rdis(10002,INF);

	 
	int n,m,k,s,t;
	cin>>n>>m>>k>>s>>t;
    vector<vector<pair<int,int>>>dis(n+1);	
	vector<vector<pair<int,int>>>rdis(n+1);
	for(int i=0;i<m;i++)
	{
		int u,v,l;
		cin>>u>>v>>l;
		dis[u].push_back({v,l});
		rdis[v].push_back({u,l});
			
	}
	
	vector<int>dists(10002,INF);
	vector<int>distt(10002,INF);
	
	dijkstras(s,dis,dists);
	dijkstras(t,rdis,distt);
	
	int ans=dists[t];
	
	for(int i=0;i<k;i++)
	{
		int u,v,d;
		cin>>u>>v>>d;
		ans=min(ans,min(dists[u]+d+distt[v],dists[v]+d+distt[u]));
	}
	cout<<ans;
}

int main()
{
	solve();
}

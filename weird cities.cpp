#include<bits/stdc++.h>
using namespace std;

#define INF 100000007

void solve()
{
	
	int n,m,k;
	cin>>n>>m>>k;
	
	///vector<vector<pair<int,int>>>g(n+1);
	vector<vector<int>>g(n+1);
	vector<int>dist(n+1);
	vector<int>path(n+1);
//	memset(dist,INF,sizeof(dist));
for(int i=1;i<=n;i++)
dist[i]=INF;
//	memset(path,-1,sizeof(path));
for(int i=1;i<=n;i++)
path[i]=-1;
  //  map<pair<<pair<int,int>>,int>,int>forbidden;
  map<pair<pair<int,int>,int>,int>forbidden;	
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	dist[1]=0;
	
	
	for(int i=0;i<k;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		forbidden[{{a,b},c}]=true;
	}
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,1});
    while(!pq.empty())
    {   int u1=pq.top().first;
    	int u=pq.top().second;
    	pq.pop();
    	for(auto x: g[u])
    	{
    		int dm=dist[u]+1;
    		if(dm<dist[x]&&forbidden.find({{u1,u},x})==forbidden.end())
    		{
    			dist[x]=dm;
    			path[x]=u;
    			pq.push({u,x});
			}
		}
	}
	
	if(path[n]==-1||dist[n]==INF)
	cout<<-1;
	
	else
	{
	
	int i=n;
	stack<int>s;
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
	cout<<endl;
	cout<<dist[n];
}

}

int main()
{
	solve();
	
}

#include<bits/stdc++.h>
using namespace std;

#define INF 100000007
#define pi pair<int,int>
 

int main(){
	
int v,e;
cin>>v>>e;
vector< vector < pair <int,int> > > graph(v+1);
for(int i=0;i<e;i++)
{
	int a,b,c;
	cin>>a>>b>>c;
	graph[a].push_back({b,c});
	graph[b].push_back({a,c});
		
}
int source=1;
int dist[v+1];
memset(dist,INF,sizeof(dist));
dist[source]=0;
int prev[v+1];
memset(prev,-1,sizeof(prev));
 
priority_queue<pi,vector< pair<int,int > >,greater< pair<int,int> > > pq;
pq.push({dist[source],source});

while(!pq.empty())
{
	int u=pq.top().second;
	pq.pop();
	for(auto x:graph[u])
	{
		int dgs=dist[u]+x.second;
		if(dgs<dist[x.first])
		{
			dist[x.first]=dgs;
			prev[x.first]=u;
			pq.push({dist[x.first],x.first});
		}
	}
	}
	
	if(prev[v]==-1||dist[v]==INF)
	cout<<-1;
	else
	{
		int i=v;
		stack<int>stk;
		stk.push(v);
		while(i!=source)
		{
			stk.push(prev[i]);
			i=prev[i];
		}
		while(!stk.empty())
		{
			cout<<stk.top();
			stk.pop();
		}
		}	
}

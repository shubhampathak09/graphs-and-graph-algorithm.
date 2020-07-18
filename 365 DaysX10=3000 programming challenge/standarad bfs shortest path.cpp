// 5. bfs shortest distance standarad implemnetation



//memset(visited,0,1001*sizeof(visited[0]));

#include<bits/stdc++.h>
using namespace std;


int N;
bool visited[1001];
//bool visited[1001];
//memset(visited,0,sizeof(visited));
int dis[1001];

using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}


void bfs(int src,vector<int>*adj,bool *visited,int dis[])
{
	
	visited[src]=1;
	dis[src]=0;
	queue<int>q;
	q.push(src);
	
	while(!q.empty())
	{
		vector<int>::iterator i;
		int u=q.front();
	    q.pop();
		for(i=adj[u].begin();i!=adj[u].end();i++)
		{
		if(visited[*i]==0)
		{
			dis[*i]=dis[u]+1;
			visited[*i]=1;
			q.push(*i);
			}	
		}
			
 	}
	
	for(int i=0;i<N;i++)
 cout<<dis[i]<<" ";	
	
}
int main()
{
	memset(visited,0,sizeof(visited));
	
	int N=6;
	vector<int>adj[6];
	
	addedge(0,1,adj);
	addedge(0,3,adj);
	addedge(1,2,adj);
	addedge(2,4,adj);
	addedge(3,5,adj);
	int src=0;
//cin>>src;
	bfs(src,adj,visited,dis);
}

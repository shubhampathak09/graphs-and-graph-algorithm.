// dfs check

#include<bits/stdc++.h>

using namespace std;


void addedge(list<int>*adj,int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void dfsutil(int u,list<int>*adj,vector<bool> &visited)
{
	
	visited[u]=true;
	cout<<u<<endl;
	list<int>::iterator i;
	
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(visited[*i]==false)
		dfsutil(*i,adj,visited);
	}
	
}

void dfs(list<int>*adj,int V)
{
//	bool visited[V];
//	list<int>adj[V];
//	for(int i=0;i<V;i++)
//	visited[i]=false;
//	
vector<bool> visited(V,false);
	
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		dfsutil(i,adj,visited);
	}
	
}
int main()
{
	
	int V=6;
	
	list<int>adj[6];
	addedge(adj,0,1);
	addedge(adj,1,2);
	addedge(adj,0,5);
	addedge(adj,2,3);
	addedge(adj,3,4);
	
	dfs(adj,V);
	
	
	
}

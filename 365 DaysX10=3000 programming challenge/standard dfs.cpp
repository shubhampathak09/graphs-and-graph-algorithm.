// standard dfs

#include<bits/stdc++.h>

using namespace std;


void addedge(int u,int v,vector<int>*adj)
{
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	}
	
	
	
	void dfsutil(int v,vector<int>*adj,bool *visited)
	{
		
		
		visited[v]=true;
		cout<<v<<endl;
		vector<int>::iterator i;
		for(i=adj[v].begin();i!=adj[v].end();i++)
		if(visited[*i]==false)
		dfsutil(*i,adj,visited);
		
	}
	
void dfs(int V,vector<int>*adj)
{
	
	bool visited[V];
	
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	for(int i=0;i<V;i++)
	if(!visited[i])
	dfsutil(i,adj,visited);
	
	}	
	
	int main()
	{
		
		int V=5;
		
		vector<int>adj[V];
		
		addedge(0,1,adj);
		addedge(0,2,adj);
		addedge(1,3,adj);
		addedge(1,4,adj);
		
		dfs(V,adj);
		
	}

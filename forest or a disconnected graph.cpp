//disconnected graph
// check if its forest
// complete theexecuiton in main function.............................!!!!!!!!!!!!!!!!!1
#include<bits/stdc++.h>
using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

void dfs(int u,vector<int>*adj,bool *visited)
{
	
	visited[u]=true;
	vector<int>::iterator i;
	
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(visited[*i]==false)
		dfs(*i,adj,visited);
	}
	
}

bool disconnectedgraph(int V,vector<int>*adj)
{
	bool visited[V];
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	dfs(0,adj,visited);
	
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		return true;
	}
	
	return false;
	
}

int main()
{
	int V=4;
vector<int>adj[4];
 addedge(0,1,adj);
  addedge(2,3,adj);
   addedge(3,4,adj);
   
   cout<<disconnectedgraph(V,adj);
//adde edges
//....
//...
//..


	
//	vector<int>adj[V];
}

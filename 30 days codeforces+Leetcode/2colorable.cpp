#include<bits/stdc++.h>
using namespace std;


void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


bool twocolorable(int v,vector<int>*adj,bool *visited,int *color )
{
	
for(auto u:adj[v])
{
	
	if(visited[u]==false)
	{
		visited[u]=true;
		color[u]=!color[v];
		
		if(twocolorable(u,adj,visited,color)==false)
		return false;
	}
	
	else if(color[u]==color[v])
	return false;
	
	}	
	
	return true;
}

int main()
{
	int V=5;
	vector<int>adj[V];
	bool visited[V];
	int color[V];
	
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	color[0]=1;
	
	addedge(0,1,adj);
	addedge(1,2,adj);
	addedge(2,3,adj);
	addedge(3,4,adj);
	addedge(1,4,adj);
//	addedge(5,0,adj);
	
	cout<<twocolorable(0,adj,visited,color);
}

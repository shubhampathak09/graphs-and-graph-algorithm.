// dfs directed graph

#include<bits/stdc++.h>

using namespace std;


void addedge(int u,int v,vector<int> *adj)
{
	adj[u].push_back(v);
	
	
}


void dfsutil(int src,vector<int> *adj,bool visited[])
{
	
	visited[src]=true;
	cout<<src;
	vector<int>::iterator i;
	
	for(i=adj[src].begin();i!=adj[src].end();++i)
	{
		if(!visited[*i])
	 	dfsutil(*i,adj,visited);
	 	
	}
	
}


void dfs(int n,vector<int>*adj)
{
	
	bool visited[n];
	
	for(int i=0;i<n;i++)
	visited[i]=false;
	
	dfsutil(0,adj,visited);
	
}

int main()

{
	
int n=5;

vector<int>*adj;

addedge(0,1,adj);
addedge(0,2,adj);
addedge(0,3,adj);
addedge(1,4,adj);

dfs(n,adj);

	
	
	
}

	
	


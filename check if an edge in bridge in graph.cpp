#include<bits/stdc++.h>

using namespace std;

void addedge(list<int>*adj,int u,int v)
{
	
	adj[u].push_back(u);
	adj[v].push_back(v);
}

void dfs(int u,bool visited[],list<int>*adj)
{
	
	visited[u]=true;
	
	//list<int>::iterator i; //list iterator need to create a vector iterator
	list<int>::iterator i;
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(visited[*i]==false)
		dfs(*i,visited,adj);
	}
	
}


bool isconnected(int V,list<int>*adj)
{
	bool visited[V];
	
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	
	dfs(0,visited,adj);
	
	
	for(int i=1;i<V;i++)
	if(visited[i]==false)
	return false;
	
	return true;
}

bool isbridge(list<int>*adj,int u,int v,int V)
{
	adj[u].remove(v);
	adj[v].remove(u);
	
	bool result=isconnected(V,adj);
	
	addedge(adj,u,v);
	
	if(result==false)
	return true;
	
	else
	return false;
	
	
}


int main()
{
	
	list<int>*adj;
	
	int V=6;
	
	addedge(adj,0,1);
	addedge(adj,1,2);
	addedge(adj,0,2);
	addedge(adj,2,3);
	addedge(adj,3,4);
	addedge(adj,4,5);
	addedge(adj,3,5);
	
	cout<<isbridge(adj,2,3,V);
	
}

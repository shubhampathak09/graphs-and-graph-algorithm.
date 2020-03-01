// to check if a graph is a tree or noy
// check if it contains cycle
// check if its connected

#include<bits/stdc++.h>

using namespace std;



void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


bool iscycleutil(int v,bool visited[],int parent,vector<int>*adj)
{
	
	visited[v]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(!visited[*i])
		{
			if(iscycleutil(*i,visited,v,adj))
			return true;
		}
		else if(*i!=parent)
		return true;
	}
	return false;
	
}


bool istree(vector<int>*adj,int V)
{
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	if(iscycleutil(0,visited,-1,adj))
	return false;
	
	for(int u=0;u<V;u++)
	if(visited[u]==false)
	return false;
	
	return true;
}
int main()
{

int V=3;

vector<int>adj[V];

addedge(0,1,adj);
addedge(0,2,adj);
addedge(1,2,adj);

cout<<istree(adj,V);	
	
}

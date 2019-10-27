#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

bool cycleutil(vector<int>*adj,vector<bool>&visited,int v,int parent)
{
	visited[v]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(visited[*i]==false)
		{
			if(cycleutil(adj,visited,*i,v))
			return true;
		}
		
		else if(*i!=parent)
		    return true;
		
		
	}
	
	return false;
	
}
bool cyclecheck(int V,vector<int>*adj)
{
	//vector<int>adj[V];
	
	vector<bool>visited(V,false);
	
	for(int u=0;u<V;u++)
	{   if(visited[u]==false)
		if(cycleutil(adj,visited,u,-1))
           return true;		
	}
	
	    return false;
	
}
int main()
{
	int V=9;
	
	vector<int>adj[V];
	
	
	addedge(adj,0,1);
	addedge(adj,0,2);
	
	addedge(adj,3,4);
	
//	addedge(adj,3,7);
	addedge(adj,6,7);
	addedge(adj,6,8);
//	addedge(adj,3,8);
	
	
	cout<<cyclecheck(V,adj);
}

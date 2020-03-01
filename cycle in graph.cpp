
#include<bits/stdc++.h>

using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

bool cycleingraph(int v,vector<int>*adj,int parent,bool*visited)
{
	
	visited[v]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[v].begin();i!=adj[v].end();++i)
	{
		if(!visited[*i])
		{
			if(cycleingraph(*i,adj,v,visited))
			return true;
		}
		else if(*i!=parent)
		return true;
	}
	return false;
	
}

int main()
{
	int V=5;
	
	vector<int>adj[V];
	
	addedge(0,1,adj);
	addedge(1,2,adj);
	addedge(2,3,adj);
	addedge(3,4,adj);
	addedge(3,1,adj);
	 bool visited[V];
	
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	cout<<cycleingraph(0,adj,-1,visited);
	
	
}

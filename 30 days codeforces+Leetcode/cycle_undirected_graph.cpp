
#include<bits/stdc++.h>
using namespace std;


void addedge(vector<int>*adj,int u,int v)
{
	
	adj[u].push_back(v);
	//adj[v].push_back(u);
}

bool cyclicutil(int v,vector<int>*adj,bool *visited,bool *recstack)
{
	
	if(visited[v]==false)
	{
		
		visited[v]=true;
		recstack[v]=true;
		
		vector<int>::iterator i;
		for(i=adj[v].begin();i!=adj[v].end();i++)
		{
			
			if(visited[*i]==false&&cyclicutil(*i,adj,visited,recstack))
			return true;
			else if(recstack[*i]==true)
			return true;
		}
	}
	recstack[v]=false;
	return false;
}

bool iscyclic(vector<int>*adj,int V)
{
	
	bool visited[V];
	bool recstack[V];
	
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
		recstack[i]=false;
	}
	for(int i=0;i<V;i++)
	{
		if(cyclicutil(i,adj,visited,recstack)==true)
        return true;
		
	}
	return false;
	
}

int main()
{
	int V=3;
	vector<int>adj[3];
	
	addedge(adj,0,1);
	addedge(adj,1,0);
	addedge(adj,0,2);
	cout<<iscyclic(adj,V);
	
}

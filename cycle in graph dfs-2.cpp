
#include<bits/stdc++.h>

using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	
	adj[u].push_back(v);
	
}


bool cycleutil(int u,bool*visited,bool*recstack,vector<int>*adj)
{
	
	if(!visited[u])
{
	visited[u]=true;
	recstack[u]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(!visited[*i]&&cycleutil(*i,visited,recstack,adj))
		return true;
		else if(recstack[*i])
		return true;
		
	}
}
	
	recstack[u]=false;
	return false;
	
}



bool iscycle(int V,vector<int>*adj)
{
	
 
	
	bool visited[V];
	bool recstack[V];
	
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
		recstack[i]=false;
		
	}
	
	for(int i=0;i<V;i++)
	if(cycleutil(i,visited,recstack,adj)==true)
	return true;
	
	return false;
}

	
	
	int main()
	{
		
		int V=3;
		vector<int>adj[V];

		addedge(0,1,adj);
		addedge(1,2,adj);
		addedge(0,2,adj);
		
		
		cout<<iscycle(V,adj);
		
		
	}
	
	


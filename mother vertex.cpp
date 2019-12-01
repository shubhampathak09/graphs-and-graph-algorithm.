
#include<bits/stdc++.h>

using namespace std;
 
void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
 } 
 
 
 void dfs(int v,vector<int>*adj,vector<bool>&visited)
 {
 	
 	visited[v]=true;
 	
 	vector<int>::iterator i;
 	
 	for(i=adj[v].begin();i!=adj[v].end();i++)
 	if(!visited[*i])
 	dfs(*i,adj,visited);
 	
 }
 
 
int mothervertex(int V)
{
	
	vector<int>adj[V];
	
	vector<bool>visited(V,false);
	
	int v;
	for(int i=0;i<V;i++)
	{
		if(!visited[i])
		dfs(i,adj,visited);
		v=i;
	}
	
	fill(visited.begin(),visited.end(),false);
	
	dfs(v,adj,visited);
	
	for(int i=0;i<V;i++)
	if(visited[i]==false)
	return -1;
	
	
	return v;
	
	
	
}

int main()
{
	int V=7;
	
	vector<int>*adj;
	
	addedge(0,1,adj);
	addedge(0,2,adj);
	
	addedge(1,3,adj);
	addedge(4,1,adj);
	
	addedge(5,2,adj);
	addedge(5,6,adj);
	
	addedge(6,4,adj);
	addedge(6,0,adj);
	
	cout<<mothervertex(V);
}

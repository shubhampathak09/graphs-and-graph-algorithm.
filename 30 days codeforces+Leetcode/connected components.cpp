
#include<bits/stdc++.h>

using namespace std;


void dfs(vector<int>*adj,int v,bool visited[])
{
	visited[v]=true;
    vector<int>::iterator i;
	
	for(i=adj[v].begin();i!=adj[v].end();i++)
	if(visited[*i]==false)
	dfs(adj,*i,visited);
}

int connnectedComponent(int V,vector<int>*adj)
{
	
//	vector<bool>visited(V,false);
	bool visited[V];
	for(int i=0;i<V;i++)
	visited[i]=false;
	int count=0;
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
			dfs(adj,i,visited);
			count++;
		}
	}
	return count;
}
void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}
int main()
{
	int V=6;
	vector<int>adj[V];
	addedge(1,5,adj);
	addedge(0,2,adj);
	addedge(2,4,adj);
	//addedge()
	cout<<connnectedComponent(V,adj);
}

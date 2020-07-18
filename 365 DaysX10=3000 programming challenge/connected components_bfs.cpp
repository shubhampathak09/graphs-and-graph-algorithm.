// finding all connected components in graph using bfs

#include<bits/stdc++.h>

using namespace std;


void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void bfs(int src,vector<int>*adj,bool *visited)
{
	
	visited[src]=true;
	queue<int>q;
	q.push(src);
	while(!q.empty())
	{
		
		int u=q.front();
		q.pop();
		for(int i:adj[u])
		{
			if(!visited[i])
			{
				visited[i]=true;
				q.push(i);
			}
		}
		
	}
	
}
int countcomponents(int V,vector<int>*adj)
{
	
//	vector<bool>visited(V,0);
bool visited[V];

//for(int i=0;i<V;i++)
//visited[i]=0;

memset(visited,0,sizeof(visited));	
	int count=0;
	
	for(int i=0;i<V;i++)
	{
	 if(visited[i]==false)
	 {
	 	bfs(i,adj,visited);
	 	count++;
		 }	
	
	}
	return count;
}

int main()
{
	int V=4;
	vector<int>adj[V];
	addedge(0,1,adj);
	addedge(2,3,adj);
	
	cout<<countcomponents(V,adj);
}

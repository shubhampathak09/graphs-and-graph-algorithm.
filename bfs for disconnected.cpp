#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int> *adj,int u,int v)
{
	adj[u].push_back(v);
	
}

void bfsutil(vector<int>*adj,int u,vector<bool> &visited)
{
	list<int>q;
	
	visited[u]=true;
	
	q.push_back(u);
	
	while(!q.empty())
	{
		
		u=q.front();
		cout<<u;
		
		q.pop_front();
		
		for(int i=0;i<adj[u].size();i++)
		{
			if(!visited[adj[u][i]])
			{
				visited[adj[u][i]]=true;
				q.push_back(adj[u][i]);
			}
		}
		
	}
	
}

void bfs(vector<int>*adj,int V)
{
	//vector<bool> visited[V];
	
	//for(int i=0;i<V;i++)
	//visited[i]=false;
	vector<bool> visited(V, false); 
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
			bfsutil(adj,i,visited);
		}
	}
	
}

int main()
{
	
	int V=5;
	
	vector<int> adj[V];
	
	addedge(adj,0,4);
	addedge(adj,1,2);
	addedge(adj,1,3);
	addedge(adj,1,4);
	addedge(adj,3,4);
	
	bfs(adj,V);
	
}

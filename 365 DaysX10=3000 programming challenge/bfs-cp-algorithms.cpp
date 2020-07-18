#include<bits/stdc++.h>
using namespace std;

void bfs(int src,int n,vector<int>*adj,vector<bool>visited)
{
	int d[n];
	queue<int>q;
	visited[src]=true;
	d[src]=0;
	
	q.push(src);
	{
		while(!q.empty())
		{
			
			int v=q.front();
			q.pop();
			for(int u:adj[v])
			{
				if(visited[u]==false)
				{
					visited[u]=true;
					q.push(u);
					d[u]=1+d[v];
				}
			}
			
		}
	}
	
	for(int i=0;i<n;i++)
	cout<<d[i]<<endl;
	
}

void addedge(int u,int v,vector<int>*adj)
{
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}
int main()
{
	
	int V=6;
	vector<int>adj[6];
	
	addedge(0,1,adj);
	addedge(0,3,adj);
	addedge(1,2,adj);
	addedge(2,4,adj);
	addedge(3,5,adj);
	
	vector<bool>visited(V,0);
	int src=0;
	bfs(src,V,adj,visited);
	
	
}



/* diffe bet vector<vector<int>>adj,vector<int>*adj,vector<int>adj[V]*/

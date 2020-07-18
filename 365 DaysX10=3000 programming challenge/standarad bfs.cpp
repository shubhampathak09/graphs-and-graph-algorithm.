//4. standarad bfs

#include<bits/stdc++.h>

using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

void bfsutil(int v,vector<int>*adj,bool *visited)
{
//	visited[v]=true;
//	cout<<v;
//visited[v]=true;
	queue<int>q;
	q.push(v);
		vector<int>::iterator i;
	while(!q.empty())
	{
		
		int u=q.front();
		visited[u]=true;
		cout<<u<<endl;
		q.pop();
	
		for(i=adj[u].begin();i!=adj[u].end();++i)
	    if(visited[*i]==false)
	    {
	    	visited[*i]=true;
	    q.push(*i);
	}
	}
	
}

void bfs(int v,vector<int>*adj)
{
	
	
	bool visited[v];
	for(int i=0;i<v;i++)
	visited[i]=false;
	
	for(int i=0;i<v;i++)
	bfsutil(i,adj,visited);
	
}

int main()
{
	int V=5;
		
		vector<int>adj[V];
		
		addedge(0,1,adj);
		addedge(0,2,adj);
		addedge(1,3,adj);
		addedge(1,4,adj);
	
	bfs(V,adj);
}

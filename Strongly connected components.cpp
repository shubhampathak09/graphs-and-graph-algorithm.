#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);  //directd graph
	
}

void gettranspose(vector<int>*adj,int V)
{
	
	for(int u=0;u<V;u++)
	{
		vector<int>::iterator i;
		
		for(i=adj[u].begin();i!=adj[u].end();i++)
		adj[*i].push_back(u);
		
	}
	
}

void stackfill(int v,vector<bool> &visited,stack<int> &stack,vector<int>*adj)
{
	
	visited[v]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		
		if(!visited[*i])
		stackfill(*i,visited,stack,adj);
		
	}
	stack.push(v);
	
}

void dfsutil(int v,vector<bool>&visited1,vector<int>*adj)
{
	visited1[v]=true;
	cout<<v<<" ";
	vector<int>::iterator i;
	
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(visited1[*i]==false)
		dfsutil(*i,visited1,adj);
		
	}
	
	
}

void printscc(vector<int>*adj,int V)
{
stack<int> stack;

vector<bool> visited(V,false);

for(int i=0;i<V;i++)
{
if(visited[i]==false)
stackfill(i,visited,stack,adj);
	
}

gettranspose(adj,V);

// mark again visited boolean as false for second bfs

vector<bool>visited1(V,false);

while(!stack.empty())
{
	
	int v=stack.top();
	stack.pop();
	
	if(visited1[v]==false)
	{
		dfsutil(v,visited1,adj);
		cout<<endl; 
	}
	
	
	
}


	
}



int main()
{
	
	int V=5;
	
	vector<int>adj[V];
	
	addedge(adj,1,0);
	addedge(adj,0,2);
	addedge(adj,2,1);
	addedge(adj,0,3);
	
	addedge(adj,3,4);
//	addedge(adj,4,6);
//	addedge(adj,5,4);
//	addedge(adj,6,5);
	
//	addedge(adj,8,7);
	
	printscc(adj,V);
	
	
}


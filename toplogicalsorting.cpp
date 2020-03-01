
// Topological sort util

// applicable only for directed acycluic graph

#include<bits/stdc++.h>
using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	
}

void topologicalsortutil(int v,bool visited[],stack<int>&stack,vector<int>*adj)
{
	
	visited[v]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[v].begin();i!=adj[v].end();i++)
	{
		if(visited[*i]==false)
		topologicalsortutil(*i,visited,stack,adj);
		 
	}
	stack.push(v);
}

void topologicalsort(int v,vector<int>*adj)
{
	stack<int>stack;
	bool visited[v];
	for(int i=0;i<v;i++)
	visited[i]=false;
	for(int i=0;i<v;i++)
	if(visited[i]==false)
	 topologicalsortutil(i,visited,stack,adj);
	
	while(!stack.empty())
	{
		cout<<stack.top();
		stack.pop();
	}
	
}

int main()
{
	int  V=4;
	
	vector<int>adj[V];
	
	addedge(1,0,adj);
	addedge(2,0,adj);
	addedge(3,1,adj);
	addedge(3,2,adj);
//	addedge(2,3,adj);
//	addedge(3,1,adj);
	
	topologicalsort(V,adj);
	
}

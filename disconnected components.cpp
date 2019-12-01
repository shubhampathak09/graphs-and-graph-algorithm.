#include<bits/stdc++.h>
using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
}


void dfsutil(int u,vector<int>*adj,bool visited[])
{
	visited[u]=true;
	vector<int>::iterator i;
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(visited[*i]==false)
		dfsutil(*i,adj,visited);
	}
}

int countcomponents(int v,vector<int>*adj)
{
	int result=0;
	bool visited[v];
	memset(visited,false,sizeof(visited));
	
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
		{
		
		dfsutil(i,adj,visited);
		result++;
	}
	}
	return result;
}


int main()
{
	
	int v=6;
	vector<int>adj[6];
	
	addedge(0,1,adj);
	addedge(2,3,adj);
	addedge(4,5,adj);
	cout<<countcomponents(v,adj);
	
}

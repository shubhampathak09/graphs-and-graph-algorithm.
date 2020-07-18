// longest connectd components chain
#include<bits/stdc++.h>

using namespace std;

//int count=0;
int count_max=0;

void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


void dfs(int v,vector<int>*adj,bool *visited,int count=0)
{
visited[v]=true;	
count++;
for(int x:v)
{
	if(!visited[v])
	dfs(x,adj,visited);
	}	
}

int longestchain(int V,vector<int>*adj)
{
	bool visited[V];
	for(int i=0;i<V;i++)
	{  int count=0;
		if(!visited[v])
		{
			dfs(i,adj,visited,count);
			count_max=max(count,count_max);
		}
	}
	return count_max;
}

int main()
{
	int V=5;
	vector<int>adj[V];
	addedge(0,1,adj);
	addedge(2,3,adj);
	addedge(3,4,adj);
	cout<<longestchain(V,adj);
}

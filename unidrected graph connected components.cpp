// now e deal here with indirected graph

#include<bits/stdc++.h>

using namespace std;



void addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}

void bfs(vector<int>*adj,vector<bool>&visited,int u)
{
	
	queue<int>q;
	visited[u]=true;
	q.push(u);
	vector<int>::iterator i;
	while(!q.empty())
	{
		int v=q.front();
		q.pop();
		for(i=adj[v].begin();i!=adj[v].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				q.push(*i);
			}
		}
		
	}
	
}

int numconnectedcom(vector<int>*adj,int V)
{
	
	vector<bool> visited(V,false);
	int result=0;
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
			bfs(adj,visited,i);
			result++;
		}
	}
	return result;
}
int main()
{
	
	int V=6;
	
	vector<int> adj[6];
	
	addedge(adj,0,1);
	addedge(adj,0,2);
	addedge(adj,1,2);
	
	addedge(adj,3,3);
	
	addedge(adj,4,5);
	
	cout<<numconnectedcom(adj,V);
}

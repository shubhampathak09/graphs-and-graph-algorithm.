#include<bits/stdc++.h>

using namespace std;

// to get number of connected components in graph.To soleve this problem we will use breadth frst search

void addedge(vector<int>*adj,int u,int v)
{
	
	adj[u].push_back(v);
}

void bfsutil(vector<int>*adj,int v,vector<bool> &visited)
{
	
	visited[v]=true;
	
	queue<int>q;
	
	q.push(v);
	
	vector<int>::iterator i;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(i=adj[u].begin();i!=adj[u].end();++i)
		{
			if(visited[*i]==false)
			{
				visited[*i]=true;
				q.push(*i);
			}
		}
	}
	
}

int countcomponent(vector<int>*adj,int V)
{
	vector<bool> visited(V,false);
	
	int result=0;
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
			bfsutil(adj,i,visited);
			cout<<"a component detected"<<endl;
			result++;
		}
	}
	
	return result;
}

int main()
{
	
	int V=12;
	
	vector<int> adj[V];
	
	addedge(adj,0,2);
	addedge(adj,1,0);
	addedge(adj,1,2);
	addedge(adj,2,3);
	addedge(adj,2,4);
	
	
	addedge(adj,5,6);
	addedge(adj,6,7);
	addedge(adj,7,8);
	addedge(adj,8,5);
	
	addedge(adj,9,10);
	
	
	addedge(adj,10,11);
	
	cout<<countcomponent(adj,V);
	
}

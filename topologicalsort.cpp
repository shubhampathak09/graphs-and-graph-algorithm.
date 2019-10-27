#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);
	
}

void topologicalsortutil(vector<int>*adj,int u,stack<int>s,vector<bool>visited)
{
	
	visited[u]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[u].begin();i!=adj[u].end();i++)
	if(visited[*i]==false)
	topologicalsortutil(adj,*i,s,visited);
	s.push(u);
	
}

void topologysort(int v)
{
	vector<int>adj[v];
	stack<int>s;
	vector<bool>visited(false,v);
	
	for(int i=0;i<v;i++)
	{
		if(!visited[i])
		topologicalsortutil(adj,i,s,visited);
	}
	while(!s.empty())
	{
		cout<<s.top()<<"\t";
		s.pop();
	}
}

int main()
{
	
	int v=6;
	vector<int>adj[6];
	
	addedge(adj,4,0);
	addedge(adj,4,1);
	
	addedge(adj,5,0);
	addedge(adj,5,2);
	
	addedge(adj,2,3);
	addedge(adj,3,1);
	
	topologysort(v);
}

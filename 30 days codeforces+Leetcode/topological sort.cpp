
#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int>*adj,int u,int v)
{
	
	adj[u].push_back(v);
	
	
}


void topologicalsortutil(int v,vector<int>*adj,bool *visited,stack<int> &stk)
{
	
	
	visited[v]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[v].begin();i!=adj[v].end();i++)
	if(visited[*i]==false)
	topologicalsortutil(*i,adj,visited,stk);
	stk.push(v);
}

void topologicalsort(int V,vector<int>*adj)
{
	bool visited[V];
	
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	stack<int>s;
	
	for(int k=0;k<V;k++)
	{
 //   if(visited[k]==false)	
	topologicalsortutil(k,adj,visited,s);
}
	while(!s.empty())
	{
		
		cout<<s.top();
		s.pop()
;			}
}


int main()
{
	int V=3;
	vector<int> adj[V];
	addedge(adj,1,0);
	addedge(adj,1,2);
	
	topologicalsort(V,adj);
}

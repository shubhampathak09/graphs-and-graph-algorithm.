#include<bits/stdc++.h>

using namespace std;


void addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);
}

int main()
{
	
	int V=5; // thats how the array work
	
	vector<int> adj[V];
	
	addedge(adj,1,2);
	
	addedge(adj,2,3);
	
	addedge(adj,3,4);
	
	addedge(adj,4,1);
	
	vector<int>::iterator i;
	
	for(i=adj[1].begin();i!=adj[1].end();i++)
	{
		cout<<*i;
		
	}
	
	
}

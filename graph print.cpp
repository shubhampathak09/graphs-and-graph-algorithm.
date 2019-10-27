#include<bits/stdc++.h>

using namespace std;

void addedge(vector<int> *adj,int u,int v)
{
	adj[u].push_back(v);
	
}

int main()
{
	int V=3;
	
	vector<int>adj[V];
	
	 addedge(adj,1,2);
	 
	 addedge(adj,2,3);
	 
	 addedge(adj,3,1);
	
	vector<int>::iterator i;
	
	for(int u=1;u<=3;u++)
	{
		for(i=adj[u].begin();i!=adj[u].end();i++)
		cout<<adj[*i];
	}
	
	}

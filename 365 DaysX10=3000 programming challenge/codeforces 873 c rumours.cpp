#include<bits/stdc++.h>
using namespace std;

int curr_min=INT_MAX;

void dfs(int v,vector<int>*adj,bool*visited,int pricetopay[])
{
	
	
	visited[v]=true;
	curr_min=min(pricetopay[v],curr_min);
	for(auto x:adj[v])
	{
		if(visited[x]==false)
		{
			dfs(x,adj,visited,pricetopay);
		}
	}
	
	
}

int pricepay(int V,vector<int>*adj,int pricetopay[])
{
	int price=0;
	
	bool visited[V];
	for(int i=0;i<V;i++)
	visited[i]=false;
	for(int i=0;i<V;i++)
	{
		if(visited[i]==false)
		{
		
     curr_min=pricetopay[i];
	 dfs(i,adj,visited,pricetopay);
	 price+=curr_min;
	}
}
	return price;
}

void addedge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
	
	
	
 } 
 
 int main()
{
	
	int V=3;
	vector<int>adj[V];
	
	int price[]={10,8,9};
	addedge(0,1,adj);
	addedge(1,2,adj);
	
	cout<<pricepay(V,adj,price);
	
}


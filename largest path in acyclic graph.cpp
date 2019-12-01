
#include<bits/stdc++.h>
using namespace std;


int max(int a,int b)
{
	return a > b ? a : b;
}

void addedge(int u,int v ,vector<int>*adj)
{
	adj[u].push_back(v);
	
}

void dfs(int u,vector<int>*adj,bool visited[],int dp[])
{
	
	visited[u]=true;
	
	vector<int>::iterator i;
	
	for(i=adj[u].begin();i!=adj[u].end();i++)
	{
		if(!visited[*i])
		dfs(*i,adj,visited,dp);
			dp[u]=max(dp[u],1+dp[*i]);
	}
	

	
		
/*	for(int i=0;i<adj[u].size();i++)
	{
		if(!visited[adj[u][i]])
		dfs(adj[u][i],adj,visited,dp);
		
		dp[u]=max(dp[u],1+dp[adj[u][i]]);
	}
*/	
}


int findpath(int V,vector<int>*adj)
{
	 int dp[V+1];
	 memset(dp,0,sizeof dp);
	 
	 bool visited[V+1];
	 memset(visited,false,sizeof visited);
	 
	for(int i=1;i<=V;i++)
	{   if(!visited[i])
		dfs(i,adj,visited,dp);
	}
	
	int maximum=0;
	for(int i=1;i<=V;i++)
	{
		if(maximum<dp[i])
		maximum=dp[i];
	}
	
	return maximum;
}

int main()
{
	///cout<<max(3,4);
	
	 int V = 8; 
    vector<int> adj[V + 1]; 
  
    // Example-1 
    addedge(1, 2,adj); 
    addedge(2, 3, adj); 
    addedge(3, 1, adj); 
    addedge(4, 5, adj); 
    addedge(5, 6, adj); 
   addedge(6, 7, adj); 
 addedge(7, 8, adj); 
	cout<<findpath(V,adj);
}

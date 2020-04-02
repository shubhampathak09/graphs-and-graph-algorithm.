
#include<bits/stdc++.h>

using namespace std;



void addedge(int u,int v,vector<int>*adj)
{
	
	adj[u].push_back(v);
}

void dfs(int u,vector<int>*adj,bool *visited)
{
	
	visited[u]=true;
	
    vector<int>::iterator i;
    
    for(i=adj[u].begin();i!=adj[u].end();++i)
    {
    	
    	if(visited[*i]=false)
    	dfs(*i,adj,visited);
    	
	}
	
}


int connectedcomponents(int n,vector<int>*adj)
{
	bool visited[n];
	
	int result=0;
	
	for(int i=0;i<n;i++)
	visited[i]==false;
	
	for(int i=0;i<n;i++)
	{
		if(visited[i]==false)
		{
			dfs(i,adj,visited);
		
		}
		//	result++;
	}

return result;	
}

int main()
{
	
	int n=6;
	
	vector<int>adj[6];
	
	addedge(0,1,adj);
	addedge(0,2,adj);
	
	addedge(3,4,adj);
	
	cout<<connectedcomponents(n,adj);
	
}

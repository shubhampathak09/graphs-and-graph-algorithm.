#include<bits/stdc++.h>

using namespace std;


bool bfs(vector<int>*adj,int v,bool visited[],int col[])
{
	
	col[v]=0;
	
	visited[v]=true;
	
	vector<int>::iterator i;
    queue<int>q;
    q.push(v);
    
    while(!q.empty())
    {
    	
    	int u=q.front();
    	
    	q.pop();
    	for(i=adj[u].begin();i!=adj[u].end();i++)
    	{
    		if(visited[*i]==false)
    		{
		    visited[*i]=true;	
    		col[*i]=1-col[u];
    		cout<<col[*i];
    		if(col[*i]==col[u])
    		return false;
    	
    		q.push(*i);
    	}
    	else if(visited[*i]==true&&col[*i]==col[u])
    	return false;
		}
    	
    	
	}
	return true;
}





bool checkbipartite(vector<int>*adj,int V)
{
	bool visited[V];
	int col[V];
	
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
		col[i]=-1;
		
	}
	
	for(int i=0;i<V;i++)
	if(bfs(adj,i,visited,col)==false)
	return false;
	
	return true;
	
	
	}	
	
	void addedge(vector<int>*adj,int u,int v)
	{
		
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
int main()
{
	
	int V=3;
	vector<int>adj[V];
	
	addedge(adj,0,1);
	addedge(adj,1,2);
//	addedge(adj,2,0);
//	addedge(adj,3,0);
	
	cout<<checkbipartite(adj,V);
}


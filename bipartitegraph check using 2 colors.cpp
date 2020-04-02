// to check if a graph is bipartite using m coloring



// incorrect output identify the error>?
#include<bits/stdc++.h>
# define V 4
using namespace std;


bool isbipartite(int G[][V],int src)
{
	
	int colorarr[V];
	
	for(int i=0;i<V;i++)
	colorarr[i]=-1;
	
	colorarr[src]=1;
	
	queue<int>q;
	q.push(src);
	
	while(!q.empty())
	{
		
		int u=q.front();
		q.pop();
		
		if(G[u][u]==1)
		return false;
		
		for(int v=0;v<V;v++)
		{
			if(G[u][v]&&colorarr[v]==-1)
			{
				colorarr[v]=1-colorarr[u];
				q.push(v);
			}
			else if(G[u][v]&&colorarr[v]==colorarr[u])
			return false;
		}
		
	}
	
	
	return true;
}


int main()
{
	
	int G[][V]={{0,1,0,1},{1,0,1,0},{0,1,0,1},{1,0,1,0}};
	
	cout<<"Whetehr the given graph is bipartite:-"<<isbipartite(G,0);
}

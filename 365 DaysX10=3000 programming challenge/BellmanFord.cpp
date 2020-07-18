#include<bits/stdc++.h>
using namespace std;

struct Edge
{
	
	int src;
	int dst;
	int weight;
	
};

struct Graph
{
	
	int V;
	int E;
	struct Edge *edge;
	
	
};


struct Graph *createGraph(int V,int E)
{
	
	struct Graph*graph=new Graph;
	graph->V=V;
	graph->E=E;
	graph->edge=new Edge[E];
	return graph;
}

void printarr(int dist[],int n)
{
	for(int i=0;i<n;i++)
	{
	
	cout<<i<<"\t"<<dist[i];
	cout<<endl;
}
}

void bellmanFord(struct Graph*graph,int src)
{
	int V=graph->V;
	int E=graph->E;
	
	int dist[V];
	for(int i=0;i<V;i++)
	dist[i]=INT_MAX;
	
	dist[src]=0;
	
	for(int i=1;i<=V-1;i++)
	{
		for(int i=0;i<E;i++)
		{
			int u=graph->edge[i].src;
			int v=graph->edge[i].dst;
			int wt=graph->edge[i].weight;
			if(dist[u]!=INT_MAX&&dist[u]+wt<dist[v])
			dist[v]=dist[u]+wt;
		}
	}
	
	for(int i=0;i<E;i++)
	{
		int u=graph->edge[i].src;
		int v=graph->edge[i].dst;
		int wt=graph->edge[i].weight;
		if(dist[u]!=INT_MAX&&dist[u]+wt<dist[v])
		{
			cout<<"ngetive cycle";
			return;
		}
	}
	
	printarr(dist,V);
	return;
}

int main()
{
	int V=5;
	int E=8;
	
	struct Graph*graph=createGraph(V,E);
	
	
	 graph->edge[0].src = 0; 
    graph->edge[0].dst = 1; 
    graph->edge[0].weight = -1; 
  
    // add edge 0-2 (or A-C in above figure) 
    graph->edge[1].src = 0; 
    graph->edge[1].dst = 2; 
    graph->edge[1].weight = 4; 
  
    // add edge 1-2 (or B-C in above figure) 
    graph->edge[2].src = 1; 
    graph->edge[2].dst = 2; 
    graph->edge[2].weight = 3; 
  
    // add edge 1-3 (or B-D in above figure) 
    graph->edge[3].src = 1; 
    graph->edge[3].dst = 3; 
    graph->edge[3].weight = 2; 
  
    // add edge 1-4 (or A-E in above figure) 
    graph->edge[4].src = 1; 
    graph->edge[4].dst = 4; 
    graph->edge[4].weight = 2; 
  
    // add edge 3-2 (or D-C in above figure) 
    graph->edge[5].src = 3; 
    graph->edge[5].dst = 2; 
    graph->edge[5].weight = 5; 
  
    // add edge 3-1 (or D-B in above figure) 
    graph->edge[6].src = 3; 
    graph->edge[6].dst = 1; 
    graph->edge[6].weight = 1; 
  
    // add edge 4-3 (or E-D in above figure) 
    graph->edge[7].src = 4; 
    graph->edge[7].dst = 3; 
    graph->edge[7].weight = -3; 
	
	bellmanFord(graph,0);
}


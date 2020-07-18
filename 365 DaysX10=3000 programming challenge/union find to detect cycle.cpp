/* using union find to detect cycl in graph
*/

#include<bits/stdc++.h>
using namespace std;


struct Edge
{
	int src;
	int dst;
};

struct Graph{
	int v;
	int e;
	struct Edge*edge;
};


struct graph*createGraph(int v,int e)
{
	struct Graph*graph=new Graph;
	graph->v=v;
	graph->e=e;
	graph->edge=(struct Edge*)malloc(graph->e*sizeof(struct Edge));
	//return graph;
};

int findparent(int parent[],int x)
{
	if(parent[x]==-1)
	return x;
	return findparent(parent,parent[x]);
	
}

void unionof(int parent[],int x,int y)
{
	
	int xst= findparent(parent,x);
	int yst=findparent(parent,y);
	
	if(xst!=yst)
	parent[xst]=yst;
	
}

bool iscycle(Graph *graph)
{
	int parent[graph->v];
	
	for(int i=0;i<graph->v;i++)
	parent[i]=-1;
	
	for(int i=0;i<graph->e;i++)
	{
		int x=findparent(parent,graph->edge[i].src);
		int y=findparent(parent,graph->edge[i].dst);
		
		if(x==y)
		return true;
	}
	return false;
	
}
int main()
{

int V=3;
int E=3;	
//Graph*graph1=createGraph(V,E);

Graph*graph=createGraph(V,E);

graph1->edge[0].src=0;
graph1->edge[0].dst=1;

graph1->edge[1].src=1;
graph1->edge[1].dst=2;

graph1->edge[2].src=2;
graph1->edge[2].dst=0;	
	
}

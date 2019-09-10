#include<bits/stdc++.h>

using namespace std;

list<int>*adj;
int V;
void addedge(int u,int v)
{
	adj[u].push_back(v);
}


void BFS(int s)
{
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
	visited[i]=false;
	
	list<int>queue;
	
	visited[s]=true;
	
	queue.push_back(s);
	
	list<int>::iterator i;
	
	while(!queue.empty())
	{
		s=queue.front();
		cout<<s;
		queue.pop_front();
		
		for(i=adj[s].begin();i !=adj[s].end();++i)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}
}

int main()
{
	
	int V;
	
	cin>>V;
	
	list<int> *adj=new list<int>[V];
	
	addedge(1,2);
	
	addedge(1,3);
	
	addedge(2,4);
	
//	addedge(4,5);
	
	BFS(1);
	
}

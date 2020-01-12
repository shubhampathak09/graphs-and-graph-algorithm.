
#include<bits/stdc++.h>

using namespace std;

void add_edge(int u,int v,vector<int>*adj)
{
	adj[u].push_back(v);
}

void printedgedutil(int u,int d,bool visited[],int path[],int &path_indx,vector<int>*adj)
{
	visited[u]=true;
	
	path[path_indx]=u;
	path_indx++;
	
	if(u==d)
	{
		for(int i=0;i<path_indx;i++)
		{
			cout<<path[i];
			 
			
		
		}
		cout<<endl;
		}
		else
		{
			vector<int>::iterator i;
			for(i=adj[u].begin();i!=adj[u].end();++i)
			{
				if(!visited[*i])
				{
					printedgedutil(*i,d,visited,path,path_indx,adj);
				}
			}
		}
		
		path_indx--;
		visited[u]=false;
		
	}
	
	void printedged(int s,int d,int V,vector<int>*adj)
	{
		bool visited[V];
		
	 
		int path[V];
		int path_indx=0;
		
		for(int i=0;i<V;i++)
		visited[i]=false;
		
		printedgedutil(s,d,visited,path,path_indx,adj);
		
		
	}
	
	
	int main()
	{
		
		int V=4;
		vector<int>adj[V];
		add_edge(0,1,adj);
		add_edge(0,2,adj);
		add_edge(0,3,adj);
		add_edge(2,0,adj);
		add_edge(2,1,adj);
		add_edge(1,3,adj);
		
		
		printedged(2,3,V,adj);
	}


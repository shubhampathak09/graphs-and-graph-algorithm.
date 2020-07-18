// source to all vertex paths

#include<bits/stdc++.h>
using namespace std;





void bfs(int src,int n,vector<int>*adj,vector<bool>visited)
{
	
	int d[n];
	int p[n];
//	p[src]=-1;
	d[src]=0;
	queue<int>q;
	q.push(src);
	
	while(!q.empty())
	{
		
		int u=q.front();
		q.pop();
		
		for(auto x:adj[u])
		{
			if(visited[x]==false)
			{
				
				visited[x]=true;
				q.push(x);
				d[x]=d[u]+1;
				cout<<x<<"\t"<<d[x]<<endl;;
//				p[x]=u;
				
			}
		}
	}
	
	for(int i=0;i<n;i++)
	cout<<d[i]<<endl;
//	
//	vector<int>path;
//	for(int i=0;i<n;i++)
//	{
//		if(!visited[i])
//		cout<<"No path from source to.."<<i;
//		else
//		{
//			for(int v=i;v!=-1;v=p[i])
//			path.push_back(v);
//			
//			reverse(path.begin(),path.end());
//			cout<<"Path from src to <<i<<is..";
//			for(auto i:path)
//			cout<<path[i];
//			cout<<endl;
//		}
//	}
	
	}
	
void addedge(int u,int v,vector<int>*adj)
{
	
	adj[u].push_back(v);
	adj[v].push_back(u);
	
}
int main()
{
	
	int V=6;
	vector<int>adj[6];
	
	addedge(0,1,adj);
	addedge(0,3,adj);
	addedge(1,2,adj);
	addedge(2,4,adj);
	addedge(3,5,adj);
	
	vector<bool>visited(V,0);
	int src=0;
	bfs(src,V,adj,visited);	
}

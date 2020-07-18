#include<bits/stdc++.h>

using namespace std;


void addedge(vector<int>*adj,int u,int v)
{
	adj[u].push_back(v);
}


void topologicalsort(int V,vector<int>*adj)
{
	
	vector<int>indegree(V,0);
	for(int i=0;i<V;i++)
	{
		vector<int>::iterator it;
		
		for(it=adj[i].begin();it!=adj[i].end();++it)
		indegree[*it]++;
		
		
	}
	
	queue<int>q;
	
	for(int i=0;i<V;i++)
	if(indegree[i]==0)
	q.push(i);
	
	
	int cnt=0;
	vector<int>top_order;
	
	while(!q.empty())
	{
		
		int u=q.front();
		q.pop();
		
		top_order.push_back(u);
		
		vector<int>::iterator it;
		
		for(it=adj[u].begin();it!=adj[u].end();++it)
		if(indegree[*it]==0)
		q.push(*it);
		
		cnt++;
	}
	
	if(cnt!=V)
	{
	
	cout<<"no topological sort exist";
    return;
}

for(auto x:top_order)
cout<<x;
	
}

int main()
{
	int V=6;
	vector<int>adj[6];
	
	addedge(adj,5, 2); 
    addedge(adj,5, 0); 
    addedge(adj,4, 0); 
    addedge(adj,4, 1); 
    addedge(adj,2, 3); 
    addedge(adj,3, 1);
	
	topologicalsort(V,adj);
}

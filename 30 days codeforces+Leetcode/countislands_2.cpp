 // in case of undirectrd graph
 
 #include<bits/stdc++.h>
 using namespace std;
 
 
 void dfs(vector<int>*adj,int v,bool visited[])
 {
 	
 	visited[v]=true;
 	vector<int>::iterator i;
 	for(i=adj[v].begin();i!=adj[v].end();i++)
 	{
 		if(!visited[*i])
 		dfs(adj,*i,visited);
	 }
 	
 }
 
 void addedge(int u,int v,vector<int>*adj)
 {
 	adj[u].push_back(v);
 	
 }
 int countK(vector<int>*adj,int V)
 {
 	
 	bool visited[V];
 	for(int i=0;i<V;i++)
 	visited[i]=false;
 	
 	int count=0;
 	for(int i=0;i<V;i++)
 	{
 		if(visited[i]==false)
 		{
 			dfs(adj,i,visited);
 			count++;
		 }
	 
	 }
	 return count;
 }
 
 int main()
 {
 		int v=4;
 	vector<int>adj[v];
 
 	addedge(0,1,adj);
	 addedge(2,1,adj); 
	 
	 cout<<countK(adj,v);	
  } 

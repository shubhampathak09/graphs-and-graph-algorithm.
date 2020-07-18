//// finding the shortest path from source to destination vertex
//// also printing the distance
//
//#include<bits/stdc++.h>
//using namespace std;
//
//int int_max=1e9; 
//
//
//void add_edge(vector<int>*adj,int u,int v)
//{
//	adj[u].push_back(v);
//	adj[v].push_back(u);
//}
//
//bool bfs(int source,int destination,int v,vector<int>*adj,int pred[],int dist[])
//{
//	
//	
//	vector<bool>visited;
//	
//	for(int i=0;i<v;i++)
//	{
//		visited[i]=false;
//		dist[i]=int_max;
//		pred[i]=-1;
//	}
//	
//	list<int>queue;
//	visited[source]=true;
//	dist[source]=0;
//	
//	queue.push_back(source);
//	
//	while(!queue.empty())
//	{
//		
//		
//		int u=queue.front();
//		vector<int>::iterator i;
//		queue.pop_front();
//		for(i=adj[u].begin();i!=adj[u].end();++i)  // auto keyword? givong error?
//		{
//			
//			if(visited[*i]==false)
//			{
//				
//				visited[*i]=true;
//				dist[*i]=1+dist[u];
//				pred[*i]=u;
//				queue.push_back(*i);
//				
//				if(*i==destination)
//				{
//			      cout<<*i;
//			      
//			      cout<<endl;
//			      
//			      cout<<"Path..";
//			      
//			      int crawl=destination;
//			      vector<int>path;
//			      
//			      while(pred[crawl]!=-1)
//			      {
//			      	path.push_back(crawl);
//			      	crawl=pred[crawl];
//				  }
//				  
//				  for(int i=path.size()-1;i>=0;i--)
//				  cout<<path[i]<<"\t";
//				  	
//					  return true;		
//				}
//			
//			}
//			
//		}
//		
//		
//		
//		
//	}
//	return false;
//	
//}
//
//int main()
//{
//	int v = 8; 
//  
//    // array of vectors is used to store the graph 
//    // in the form of an adjacency list 
//    vector<int> adj[v]; 
//  
//    // Creating graph given in the above diagram. 
//    // add_edge function takes adjacency list, source 
//    // and destination vertex as argument and forms 
//    // an edge between them. 
//    add_edge(adj, 0, 1); 
//    add_edge(adj, 0, 3); 
//    add_edge(adj, 1, 2); 
//    add_edge(adj, 3, 4); 
//    add_edge(adj, 3, 7); 
//    add_edge(adj, 4, 5); 
//    add_edge(adj, 4, 6); 
//    add_edge(adj, 4, 7); 
//    add_edge(adj, 5, 6); 
//    add_edge(adj, 6, 7); 
//    int source = 0, dest = 7; 
//	int pred[v],dist[v];
//	bfs(source,dest,v,adj,pred,dist);
//}

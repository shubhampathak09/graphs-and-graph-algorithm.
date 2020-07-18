// dijkstras shortest path

#include<bits/stdc++.h>

using namespace std;
int main()
{
	int c,f;
	cin>>c>>f;
	int graph[c][c];
	
	for(int i=0;i<c;i++)
	for(int j=0;j<c;++j)
	graph[i][j]=100000007;
	
	for(int i=0;i<c;i++)
    graph[i][i]=0;
	
		
	int x,y,p;

	
	for(int i=0;i<f;i++)
	{
		cin>>x>>y>>p;
	x--;
	y--;
	graph[x][y]=p;
	graph[y][x]=p;	
	 } 
	
	int dist[c][c],i,j,k;
	for(i=0;i<c;i++)
	for(j=0;j<c;j++)
	dist[i][j]=graph[i][j];
	
	 for(k=0;k<c;k++)
	 {
	 	for(i=0;i<c;i++)
	 	{
	 		for(j=0;j<c;j++)
	 		{
	 			if(dist[i][k]+dist[k][j]<dist[i][j])
	 			dist[i][j]=dist[i][k]+dist[j][k];
			 }
		 }
	 }
	
	for(i=0;i<c;i++)
	{
	
	for(j=0;j<c;j++)
	{
	cout<<"shortest path from vertex "<<i+1<<" to "<<j+1<<" is "<<dist[i][j]<<"\n";
//	cout<<dist[i][j]<<"\n";
	
}
//cout<<endl;
}
	// for max shortest path 
	
	//int maxi=0;
/*	int ans=0;
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<c;j++)
		ans=max(ans,dist[i][j]);
	}
	cout<<"*"<<ans<<"*";
	*/
}

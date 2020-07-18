// minor modififcation

#include<bits/stdc++.h>

using namespace std;

int N,M;
int visited[1001][1001];
int dist[1001][1001];


bool issafe(int x,int y)
{
	
	if(x<1||x>N|x<1||x>M)
	return false;
	if(visited[x][y]==1)
	return false;
	return true;
 } 
 
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1}; 
 
int bfs(int srcX,int srcY,int destX,int destY)
{
	queue<pair<int,int>>q;
	q.push({srcX,srcY});
	visited[srcX][srcY]=1;
	dist[srcX][srcY]=0;	
	while(!q.empty())
	{
		int currX=q.front().first;
		int currY=q.front().second;
		
		for(int i=0;i<4;i++)
		{
		
		if(issafe(currX+dx[i],currY+dy[i]))
		{
			int newX=currX+dx[i];
			int newY=currY+dy[i];
			dist[newX][newY]=1+dist[currX][currY];
			visited[newX][newY]=1;
			q.push({newX,newY});
		}
	}
	}
  
  return dist[destX][destY];	
}
	
 



int main()
{
	
	
cin>>N>>M;

cout<<bfs(1,1,3,3);

}

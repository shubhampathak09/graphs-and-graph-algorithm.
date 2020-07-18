#include<bits/stdc++.h>
using namespace std;


int dist[1001][1001];
bool visited[1001][1001];
int N,M;


bool issafe(int x,int y)
{
	if(x<1||x>N||y<1||y>M)
	return false;
	if(visited[x][y])
	return false;
	return true;
}

// cell free to move in 4 directions bidirectionsla bfs


int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};


void bfs(int srcX,int srcY)
{
	
	queue<pair<int,int>>q;
	q.push({srcX,srcY});
	visited[srcX][srcY]=1;
	dist[srcX][srcY]=0;
	while(!q.empty())
	{
		int currX=q.front().first;
		int currY=q.front().second;
		q.pop();
		
		for(int i=0;i<4;i++)
		if(issafe(currX+dx[i],currY+dy[i]))
		{
			int newX=currX+dx[i];
			int newY=currY+dy[i];
			q.push({newX,newY});
			visited[newX][newY]=1;
			dist[newX][newY]=1+dist[currX][currY];
		}
	}
	
	for(int i=1;i<=N;i++)
	{
	
	for(int j=1;j<=M;j++)
	cout<<dist[i][j]<<" ";
	cout<<endl;
}}

int main()
{
	
	int x,y;
//	int N,M;
    cin>>N>>M;
    cin>>x>>y;
    
    bfs(x,y);
	
}

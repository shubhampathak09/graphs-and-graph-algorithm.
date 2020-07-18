// BFS GRID SHORTEST PATH BUT DESTINATION CORRDINATES SPECIFIED
#include<bits/stdc++.h>
using namespace std;

int dist[1001][1001];
int visited[1001][1001];

int N,M;
bool issafe(int x,int y)
{
	if(x<1||x>N||y<1||y>M)
	return false;
	if(visited[x][y])
	return false;
	return true;
}

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

void bfs(int srcX,int srcY,int destX,int destY)
{
	queue<pair<int,int>>q;
	q.push({srcX,srcY});
	visited[srcX][srcY]=1;
	dist[srcX][srcY]=0;
	while(!q.empty())
	{
		int crrX=q.front().first;
		int crrY=q.front().second;
		q.pop();
		if(crrX==destX&&crrY==destY)
		return;
		for(int i=0;i<4;i++)
		{
			if(issafe(crrX+dx[i],crrY+dy[i]))
			{
			
			int newX=crrX+dx[i];
			int newY=crrY+dy[i];
			dist[newX][newY]=1+dist[crrX][crrY];
			visited[newX][newY]=1;
			q.push({newX,newY});
		}
		}
		
	}
}

int main()
{
//	int N,int M;
    cout<<"Enter the dimnensions of Board...";
	cin>>N>>M;
	cout<<endl;
	int srcX,srcY,destX,destY;
	cout<<"Enter the src coordinate X..";
	cin>>srcX;
	cout<<"Ënter the src coordinate Y..";
	cin>>srcY;
		cout<<"Enter the destination coordinate X..";
	cin>>destX;
	cout<<"Enter the destination coordinate Y..";
	cin>>destY;
	
		
	bfs(srcX,srcY,destX,destY);
	
	cout<<"Shortest distance is..";
	
	cout<<dist[destX][destY];
}

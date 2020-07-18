#include<bits/stdc++.h>
using namespace std;


int M,N;
char grid[1001][1001];
int visited[1001][1001];


bool issafe(int x,int y)
{
	if(x<1||x>M||y>N)
	return false;
	if(visited[x][y]==1||grid[x][y]=='#')
	return false;
	 return true;
}  


int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
void dfs(int x,int y)
{
	visited[x][y]=1;
	for(int i=0;i<4;i++)
	{
		if(issafe(x+dx[i],y+dy[i]))
		dfs(x+dx[i],y+dy[i]);
	}
	
}

int main()
{
	cin>>M>>N;
	
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=N;j++)
		{
			cin>>grid[i][j];
			visited[i][j]=0;
		}
	}
	int count=0;
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=N;j++)
		{
			if(visited[i][j]==0&&grid[i][j]=='.')
			{
				dfs(i,j);
				count++;
			}
		}
	}
	cout<<count;
}

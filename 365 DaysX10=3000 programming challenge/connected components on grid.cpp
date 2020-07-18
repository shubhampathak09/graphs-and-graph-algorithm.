
#include<bits/stdc++.h>

using namespace std;
 
int N , M;
int grid[1001][1001];
bool visited[1001][1001];

bool issafe(int x,int y)
{
	
	if(x<1||x>N||y<1||y>M)
	return false;
	if(visited[x][y]==1||grid[x][y]==0)
	return false;
	return true;
	
	
}
 
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
 
void dfs(int x ,int y)
{
	visited[x][y] = 1;
 
	for(int i=0;i<4;i++)
	if(issafe(x + dx[i] , y + dy[i]))
	dfs(x + dx[i] , y + dy[i]);
}

int main()
{
	
	cin>>N>>M;
	for(int i=1;i<=N;i++)
	for(int j=1;j<=M;j++)
	{
		cin>>grid[i][j];
        visited[i][j]=0;	 
	}
	
	int cc=0;
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			 
	      if(visited[i][j] == 0 && grid[i][j] == 1)
		  {
		  	dfs(i,j);
		  	cc++;
		  }
	
		}
	}
	
	cout<<cc;
	
}

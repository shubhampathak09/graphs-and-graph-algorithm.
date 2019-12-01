#include<bits/stdc++.h>

using namespace std;

#define R 5
#define C 5



bool issafe(int row,int col,int M[R][C],bool visited[R][C])
{
	if(row>=0&&row<R&&col>=0&&col<C&&M[row][col]&&!visited[row][col])
	return true;
	else
	return false;
	
}

void dfs(int row,int col,int M[R][C],bool visited[R][C])
{
	
visited[row][col]=true;

int rowarr[]={0,1,1,1,0,-1,-1,-1};
int colarr[]={1,1,0,-1,-1,-1,0,1};

int k=0;
for(k=0;k<8;k++)
{
	if(issafe(row+rowarr[k],col+colarr[k],M,visited))
	{
		dfs(row+rowarr[k],col+colarr[k],M,visited);
	}
	}	
	
}

int countislands(int M[R][C])
{
	
	bool visited[R][C];
	memset(visited,0,sizeof(visited));
	
	
	int count=0;
	
	for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	{
	
	if(M[i][j]&&visited[i][j]==false)
	{
	
	dfs(i,j,M,visited);
	count++;
}
}
return count;
}
int main()
{
	
	int M[R][C]={    { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } }; 
                     
                  
				  cout<<countislands(M);   
 
}

#include<bits/stdc++.h>
using namespace std;


#define ROW 4
#define COL 5


bool issafe(int M[ROW][COL],int row,int col,bool visited[ROW][COL])
{
	return (row>=0&&col>=0&&row<ROW&&col<COL&&visited[row][col]==false);
}

void dfs(int M[][COL],int row,int col,bool visited[ROW][COL])
{
	visited[row][col]=true;
	
	int rowV[]={0,1,0,-1};
	
	int colV[]={-1,0,1,0};
	
	for(int i=0;i<4;i++)
	{
		if(issafe(M,row+rowV[i],col+colV[i],visited))
		dfs(M,row+rowV[i],col+colV[i],visited);
	}
}


int countIslands(int M[][COL])
{
	
	
	bool visited[ROW][COL];
	
	memset(visited,false,sizeof(visited));
	
	int count=0;
	
	for(int i=0;i<ROW;i++)
	{
		for(int j=0;j<COL;j++)
		{
			if(M[i][j]==1&&visited[i][j]==false)
			{
				dfs(M,i,j,visited);
				count++;
			}
		}
	}
	
	
	return count;
}


int main()
{
	
	
	int M[][COL]=  { { 1, 1, 0, 0, 0 }, 
                     { 1, 1, 0, 0, 0 }, 
                     { 0, 0, 1, 0, 0 }, 
                     { 0, 0, 0, 1, 1 } 
                    }; 
	
	cout<<countIslands(M);
	
}

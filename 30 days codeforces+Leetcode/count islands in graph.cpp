
#include<bits/stdc++.h>

using namespace std;


#define ROW 5
#define COL 5

bool issafe(int M[ROW][COL],int row,int col,bool visited[ROW][COL])
{	
	return (row>=0&&row<ROW&&col>=0&&col<COL&&M[row][col]==1&&visited[row][col]==false);
}



void dfs(int M[ROW][COL],int row,int col,bool visited[ROW][COL])
{
	
	int rowx[]={1,1,0,-1,-1,-1,0,1};
	int colx[]={0,1,1,1,0,-1,-1,-1};
	
	
	visited[row][col]=true;
	
	for(int i=0;i<8;i++)
	{
	  if(issafe(M,row+rowx[i],col+colx[i],visited))
	  dfs(M,row+rowx[i],col+colx[i],visited);
	}
		
}

int countIslands(int M[ROW][COL])
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
	int M[][COL] = { { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } }; 
	
	
	cout<<countIslands(M);
}

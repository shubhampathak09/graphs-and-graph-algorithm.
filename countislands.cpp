// finding out the number of islands in graph making use of bfs


#include<bits/stdc++.h>

using namespace std;

# define R 5
# define C 5

bool issafe(int mat[R][C],int i,int j,bool vis[R][C])
{
	if(i>=0&&i<=R&&j>=0&&j<=C&&mat[i][j]&&vis[i][j]==false)
	return true;
	else
	return false;
}

void bfs(int mat[R][C],bool vis[R][C],int si,int sj)
{
	int row[]={-1,-1,-1,0,0,1,1,1};
	int col[]={1,0,-1,1,-1,1,0,-1};
	
//	for(int i=0;i<R;i++)
//	for(j=0;j<C;j++)
//	visited[i][j]=false;

//first step any bfs

queue<pair<int,int>>q;
q.push(make_pair(si,sj));
vis[si][sj]=true;

while(!q.empty())
{
	int i=q.front().first;
	int j=q.front().second;
	q.pop();
	
	//for(i=0;i<8;i++)
	for(int k=0;j<8;k++)
	{
		if(issafe(mat,i+row[k],j+col[k],vis))
		{
		
		vis[i+row[k]][j+col[k]]=true;
        q.push(make_pair(i+row[k],j+col[k]));	
	}
	}
	
	}	
	
	
}

int countislands(int mat[R][C])
{
	
	bool vis[R][C];
for(int i=0;i<R;i++)
	for(int j=0;j<C;j++)
	vis[i][j]=false;
   
   int res=0;
   for(int i=0;i<R;i++)
   {
   	for(int j=0;j<C;j++)
   	{
   		if(mat[i][j]&&vis[i][j]==false)
   		{
   			bfs(mat,vis,i,j);
   			res++;
		   }
	   }
		}
		return res; 	
}


int main()
{
	
	int mat[R][C] = { { 1, 1, 0, 0, 0 }, 
                     { 0, 1, 0, 0, 1 }, 
                     { 1, 0, 0, 1, 1 }, 
                     { 0, 0, 0, 0, 0 }, 
                     { 1, 0, 1, 0, 1 } }; 
	
	
	
	cout<<countislands(mat);
	
	
	
}

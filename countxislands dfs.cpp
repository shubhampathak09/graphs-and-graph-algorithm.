
/* 

{             {'O', 'O', 'O'},
              {'X', 'X', 'O'},
              {'X', 'X', 'O'},
              {'O', 'O', 'X'},
              {'O', 'O', 'X'},
              {'X', 'X', 'O'}
              
              
              {{'X', 'O', 'O', 'O', 'O', 'O'},
              {'X', 'O', 'X', 'X', 'X', 'X'},
              {'O', 'O', 'O', 'O', 'O', 'O'},
              {'X', 'X', 'X', 'O', 'X', 'X'},
              {'X', 'X', 'X', 'O', 'X', 'X'},
              {'O', 'O', 'O', 'O', 'X', 'X'},
             };
              
              
             };

*/




#include<bits/stdc++.h>

#define R 5
#define C 5

using namespace std;


bool issafe(int row,int col,char M[R][C],bool visited[R][C])
{
	return (row>=0&&row<R&&col>=0&&col<C&&M[row][col]=='X'&&visited[row][col]==false);
}


void dfs(int row,int col,char M[R][C],bool visited[R][C])
{
	visited[row][col]=true;
	 static int rowarr[]={0,1,0,-1};
     static int colarr[]={1,0,-1,0};
	
	 for(int k=0;k<4;k++)
	 {
	 	if(issafe(row+rowarr[k],col+colarr[k],M,visited))
	 	{
		 
	 	dfs(row+rowarr[k],col+colarr[k],M,visited);
	 }
}
	


}


int coutgroupX(char M[R][C])
{
	
	
	bool visited[R][C];
	memset(visited,0,sizeof(visited));
	
	int count=0;
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			if(M[i][j]=='x'&&visited[i][j]==false)
			{
				dfs(i,j,M,visited);
				count++;
			}
		}
	}
	
	return count;
	
}


int main()
{
	
 	char M[R][C]={    { 'x', 'x', 'o', 'o', 'o' }, 
                     { 'x', 'x', 'o', 'o', 'o' }, 
                     { 'x', 'o', 'o', 'x', 'x' }, 
                     { 'o', 'o', 'o', 'o', 'o' }, 
                     { 'x', 'o', 'x', 'o', 'x' } }; 
	
	cout<<coutgroupX;
}

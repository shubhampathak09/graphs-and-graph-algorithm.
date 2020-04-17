#include<bits/stdc++.h>

using namespace std;

#define INF INT_MAX
# define N 4

void youngify(int mat[N][N],int i,int j)
{
	
	int downval=(i+1)<N ? mat[i+1][j] :INF;
	int rightval=(j+1)<N ? mat[i][j+1] : INF;
	
	if(downval==INF && rightval==INF)
	return;
	
	if(downval<rightval)
	{
		mat[i][j]=downval;
		downval=INF;
		youngify(mat,i+1,j);
	}
	else
	{
		mat[i][j]=rightval;
		rightval=INF;
		youngify(mat,i,j+1);
	}
	
}


int extractmin(int mat[N][N])
{
	int min=mat[0][0];
	mat[0][0]=INF;
	
	youngify(mat,0,0);
	
	return min;
}


void printsortedelements(int mat[][N])
{
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		cout<<extractmin(mat)<<"\n";
	}
	
}
int main()
{
	
	 int mat[N][N] = { {10, 20, 30, 40}, 
                    {15, 25, 35, 45}, 
                    {27, 29, 37, 48}, 
                    {32, 33, 39, 50}, 
                  }; 
	
	
 printsortedelements(mat);
}

#include<bits/stdc++.h>
using namespace std;

#define R 3
#define C 3

int mini(int a,int b,int c)
{
	return min(a,min(b,c));
}

int mincost(int cost[R][C],int m,int n)
{
	int i,j;
	int tc[R][C];
	tc[0][0]=cost[0][0];
	for(int i=1;i<=m;i++)
	{
	tc[i][0]=tc[i-1][0]+cost[i][0];
	}
	for(int j=1;j<=n;j++)
	tc[0][j]=tc[0][j-1]+cost[0][j];
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		tc[i][j]=mini(tc[i-1][j-1],tc[i][j-1],tc[i-1][j])+cost[i][j];
	}
	
	return tc[m][n];
}

int main()
{
	
	
	int cost[R][C]={{1,2,3},{4,8,2},{1,5,3}};
	cout<<mincost(cost,2,2);
	
}

#include<bits/stdc++.h>

using namespace std;

//0 by 1 knapscak problem


int knapsack(int val[],int wt[],int W,int size)
{
	int dp[size+1][W+1];
	
	dp[0][0]=0;        //doubt?
	for(int i=1;i<=W;i++)
	dp[0][i]=0;
	
	for(int i=1;i<=size;i++)
	{
		for(int j=0;j<=W;j++)
		{
			
			if(j<wt[i])
			dp[i][j]=dp[i-1][j];
			
			else
			{
				dp[i][j]=max(dp[i-1][j],val[i]+dp[i-1][j-wt[i]]);
			}
		}
	}
	return dp[size][W];
}

int main()
{
	
	int val[] = {1,6,18,22,28}; 
    int wt[] = {1,2,5,6,7}; 
    int  W = 11; 
	
	int size=sizeof(val)/sizeof(val[0]);
	
	cout<<knapsack(val,wt,W,size);
	
}

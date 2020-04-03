#include<bits/stdc++.h>

using namespace std;

int checksubsetsum(int a[],int n,int sum)
{
	
	int dp[n+1][sum+1];
	
	dp[0][0]=1;
	
	for(int i=1;i<=sum;i++)
	dp[0][i]=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			
			if(j<a[i])
			dp[i][j]=dp[i-1][j];
			
			else
			{
				int need=j-a[i];
				if(dp[i-1][j]==1||dp[i-1][need]==1)
				dp[i][j]=1;
				else
				dp[i][j]=0;
			}
		}
	}
	
	int ans=dp[n][sum];
	
	return ans; 
	
}


int main()
{
 
 int a[]={2,3};
 int sum=5;
 int n=2;

 cout<<checksubsetsum(a,n,sum);
}

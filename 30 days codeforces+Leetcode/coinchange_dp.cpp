


///incorrect outptit ajcnsdjcnsdjkcnsdjcnsdjkcnsdjkcnjksdncsdjcnsdjnc jks????????????????????????????????????/////
#include<bits/stdc++.h>

using namespace std;


int coinchange(int a[],int n,int sum)
{
	
	int dp[n+1][sum+1];
	
	dp[0][0]=0;
	
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
				int x=dp[i-1][j];
				int y=dp[i-1][j-a[i]];
				dp[i][j]=x+y;
			}
		}
	}
	
	return dp[n][sum];
}

int main()
{
	
	int a[]={2,3,6,1,5};
	int sum=5;
	int n=5;
	cout<<coinchange(a,n,sum);
	
	
}

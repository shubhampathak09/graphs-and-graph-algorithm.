// min Edit distance
#include<bits/stdc++.h>
using namespace std;

int min(int a,int b,int c)
{
	return min(a,min(b,c));
}

int minEdit(string string1,string string2)
{
	
	int n=string1.length();
	int m=string2.length();
	int dp[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
		
		if(i==0)
		dp[i][j]=j;
		else if(j==0)
		dp[i][j]=i;
	 else if(string1[i-1]==string2[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
			dp[i][j]=1+min(dp[i-1][j],dp[i-1][j-1],dp[i][j-1]);
		
	
	}
	
}
cout<<dp[m][n];
}

int main()
{
	cout<<minEdit("sunday","saturday");
}


#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	return a>b ?a :b;
}

int lcs(string str1,string str2)
{
	
	int m=str1.length();
	int n=str2.length();
	
	int dp[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(str1[i-1]!=str2[j-1])
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			else
			dp[i][j]=1+dp[i-1][j-1];
		}
	}
	return dp[m][n];
}

int main()
{
	
	string s1="aggtab";
	string s2="gxtxayb";
	
	cout<<lcs(s1,s2);
}

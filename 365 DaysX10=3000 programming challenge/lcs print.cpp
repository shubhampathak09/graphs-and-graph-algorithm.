#include<bits/stdc++.h>
using namespace std;

void lcs(string str1,string str2)
{
	
	int m=str1.length();
	int n=str2.length();
	
	int dp[m+1][n+1];// wtf is dp[m+1][n=1]?
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			
			else if(str1[i-1]==str2[j-1])
			dp[i][j]=1+dp[i-1][j-1];
			
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	int index=dp[m][n];
	//cout<<index;
	char Y[index+1];
	Y[index]='\0';
	
	int i=m,j=n;
	
	while(i>0&&j>0)
	{
		if(str1[i]==str2[j])
		{
			Y[index-1]=str1[i-1];
			i--;
			j--;
			index--;
		}
		else if(dp[i-1][j]>dp[i][j-1])
		{
			i--;
		}
		else
		j--;
	}
	cout<<Y;
}
int main()
{
	string s1="aggtab";
	string s2="gxtxayb";
	
	lcs(s1,s2);
}

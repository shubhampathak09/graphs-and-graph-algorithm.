#include<bits/stdc++.h>
using namespace std;

int coinchange(int m,int n)
{
	int L[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0; j<=n;j++)
		{
			
			if(i==0&&j==0)
			L[i][j]=1;
			else if(i==0)
			L[i][j]=0;
			else if(i>j)
			L[i][j]=L[i-1][j];
			else
			L[i][j]=L[i-1][j]+L[i][j-i];
		}
	}
	return L[m][n];
	
}

int main()
{
	int n=4;
	int s[]={1,2,3};
	
	int l=sizeof(s)/sizeof(s[0]);
	
	//cout<<l;
	
	cout<<coinchange(l,n);
	
}

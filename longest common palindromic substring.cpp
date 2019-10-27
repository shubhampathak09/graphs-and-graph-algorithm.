#include<bits/stdc++.h>



using namespace std;

int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}

int lps(string s)
{
	
	int n=s.length();
	
	int a[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			a[i][j]=1;
			
		    else
			a[i][j]=0;
	}
}
			for(int c=2;c<=n;c++)
				{
					for(int i=0;i<n-c+1;i++)
				{
				int j=i+c-1;
						
			   if(s[i]==s[j])
				{
					a[i][j]=2+a[i+1][j-1];
				}	
				else
				a[i][j]=max(a[i][j-1],a[i+1][j]);
					
			}
				}
				
			 
	int index=a[0][n-1];
	string lcsstring(index+1,'/0');
	
	int i=n,j=n;		
		
	while(i>0&&j>0)
	{
		if(s[i]==s[j])
		{
			lcsstring
		}
	}
	
	
	
   return a[0][n-1];
			
}

int main()
{
	string s="attack";
	
	cout<<lps(s);
}

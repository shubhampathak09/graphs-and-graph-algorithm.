#include<bits/stdc++.h>

using namespace std;


# define n 4

int max(int a,int b)
{
	return a>b ? a: b;
}


int input_outputmaxsum( )
{
	int a[n][n];
	
	
	memset(a,0,sizeof(a));
	
	for(int i=0;i<n;i++)
	{
		 for(int j=0;j<=i;j++)
		 cin>>a[i][j];
		 cout<<"\n";
	}
	
	for(int i=n-2;i>=0;i--)
	{
		for(int j=0;j<=i;j++)
		a[i][j]=a[i][j]+max(a[i+1][j],a[i+1][j+1]);
	}
	
	return a[0][0];
}
int main()
{
	cout<<input_outputmaxsum();
	 	 
}

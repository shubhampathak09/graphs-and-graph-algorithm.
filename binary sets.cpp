#include<bits/stdc++.h>
using namespace std;

// to find number elemetns set k within n element sets

int returnset(int n,int k)
{
	if(k==0||k==n)
	return 1;
	else
	return returnset(n-1,k)+ returnset(n-1,k-1);
}

int main()
{
	int n=7;
	int k=3;
	
	cout<<returnset(n,k);
	
	
}

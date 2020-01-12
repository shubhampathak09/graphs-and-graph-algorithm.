#include<bits/stdc++.h>
using namespace std;

int joseph(int n,int k)
{
	
	if(n==1)
	return 1;
	
	else
	return (joseph(n-1,k)+k-1)%(n+1);
	
}

int main()
{
	int n=7;
	int k=3;
	
	cout<<joseph(n,k);
}



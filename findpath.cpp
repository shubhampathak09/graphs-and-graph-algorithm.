#include<bits/stdc++.h>
using namespace std;

int findnumpath(int m,int n);
int main()
{
	
	
	int m=3,n=3;
	
	cout<<findnumpath(m,n);
	
}

int findnumpath(int m,int n)
{
	
	if(m==1||n==1)
	return 1;
	
	else
	return findnumpath(m-1,n)+findnumpath(m,n-1)
	
}

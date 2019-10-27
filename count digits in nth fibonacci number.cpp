#include<bits/stdc++.h>

using namespace std;

int fib(int n)
{
	if(n==1||n==0)
	return n;
	else
	return fib(n-1)+fib(n-2);
}

int count(int n)
{
	int c=0;
	while(n!=0)
	{
		c+=1;
		n=n/10;
	}
	return c;
}

int main()
{
	cout<<fib(12)<<endl;
	
	cout<<count(fib(12));
	
}


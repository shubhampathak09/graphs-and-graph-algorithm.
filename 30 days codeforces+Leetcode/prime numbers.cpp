#include<bits/stdc++.h>
using namespace std;

/*
bool checkprime(int n)
{
	
	for(int i=2;i<=n-1;i++)
	if(n%i==0)
	return 0;
	
	return 1;
	
}
*/

bool checkprime(int n)
{
	
	for(int i=2;i*i<=n;i++)
	if(n%i==0)
	return 0;
	
	return 1;
	
}

int main()
{
	cout<<checkprime(3)<<checkprime(10)<<checkprime(23);
}

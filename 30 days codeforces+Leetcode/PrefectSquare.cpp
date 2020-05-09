#include<bits/stdc++.h>
using namespace std;

bool checkPerfectSquare(int n)
{
	if(n==0)
	return true;
	
	if(n<0)
	return false;
	
	for(int i=1;i*i<=n;i++)
	{
		
		if(n%i==0&&n/i==i)
		return true;
	}
	return false;
}

int main()
{
	cout<<checkPerfectSquare(12)<<"\t";
	cout<<checkPerfectSquare(1)<<"\t";
	cout<<checkPerfectSquare(4)<<"\t";
	cout<<checkPerfectSquare(0)<<"\t";
	cout<<checkPerfectSquare(-3)<<"\t";
	
}

#include<bits/stdc++.h>

using namespace std;


int gcd(int a,int b)
{
	if(a%b==0)
	return b;
	else
	return gcd(b,a%b);
	
}

int main()
{
	
	int a,n,m;
	
	int A1,A2;
	cin>>n>>m>>a;
	A1=n*m;
	A2=a*a;
	
	cout<<gcd(A1,A2);
}

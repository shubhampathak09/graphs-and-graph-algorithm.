//Two Knights
// n=k^2;

//k^2*k^2-1/2


// number of ways to place teo knights on chess board so that they dont attack each other

#include<bits/stdc++.h>
using namespace std;



void solve()
{
	
	long n;
	cin>>n;
	
	for(long k=1;k<=n;k++)
	{
	
	long a1=k*k;
	long a2=a1*(a1-1)/2;
	
	if(k>2)
	{
		
		int knightpos=4*(k-1)*(k-2);
		cout<<a2-knightpos<<"\n";
	}
}
}

int main()
{
solve();	
}


#include<bits/stdc++.h>

using namespace std;


bool ishappy(long long n)

{
	long long sum=0,rem=0;
	
	if(n==1)
	return true;
	
	
	while(n!=0)
	{
		rem=n%10;
		sum+=rem*rem;
		n=n/10;
	}
	ishappy(sum);
	return false;
}

int main()
{
	cout<<ishappy(28);
	
}

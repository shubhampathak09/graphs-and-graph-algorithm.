#include<bits/stdc++.h>

using namespace std;

long long sum=0;

long long calcFuel(long long x)
{
	if(x==0)
	return 0;
	
	int val=(x/2) -2;
	return val+ calcFuel(val)
	else
	return sum+(x/2) -2 + calcFuel(sum+(x/2) -2);
	
}

int main()
{
	
	cout<<calcFuel(1969);
	
}

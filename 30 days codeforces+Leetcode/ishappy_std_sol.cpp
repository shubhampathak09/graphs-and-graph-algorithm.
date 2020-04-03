// happy numbers erictp/o>
#include<bits/stdc++.h>

using namespace std;


int f(int n)
{
	int sum=0;
	while(n)
	{
	
	int rem;
	 
	rem=n%10;
	n=n/10;
	sum+=rem*rem;
}
return sum;
}

bool ishappy(int n)
{
	unordered_set<int> visited;
	while(true)
	{
		if(n==1)
		return true;
		
		n=f(n);
		if(visited.count(n)==1)
		{
		
		return false;}
		visited.insert(n);
	}
	
	
}

int main()
{
	
	cout<<ishappy(431);
	cout<<endl;
	cout<<ishappy(1);
}

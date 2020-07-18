#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	long long n;
	cin>>n;
	int answer=0;
	for(int i=5;i<=n;i*=5)
	{
		answer+=n/i;
		
	}
	cout<<answer;
}

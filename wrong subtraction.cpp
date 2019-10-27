#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int num,k;
	
	cin>>num>>k;
	
	while(k!=0)
	{
		if(num%10!=0)
		num=num-1;
		else
		num=num/10;
		
		k--;
	}
	cout<<num;
}

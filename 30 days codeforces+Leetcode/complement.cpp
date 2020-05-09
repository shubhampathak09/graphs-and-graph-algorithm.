// complement of number

#include<bits/stdc++.h>

using namespace std;



int getcomplement(int n)
{
	int tmp=n;
	int mask=0;
	while(tmp)
	{
		tmp=tmp>>1;
		mask=mask<<1;
		mask=mask|1;
		
	}
	return n^mask;
}

int main()
{
	
	cout<<getcomplement(5);
	
}

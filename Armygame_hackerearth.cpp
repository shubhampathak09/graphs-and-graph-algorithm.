#include<bits/stdc++.h>
using namespace std;

int minposition(int n,int m)
{
	
	if(n*m<4)
	return 1;
	
	if(n==1||m==1)
	{
		if(n*m%2!=0)
		return n*m/2 +1;
		else
		return n*m/2;
	}
    else if(n*m%4!=0)
    return n*m/4 +1; 
//	cout<<cvlue;
    else
	return n*m/4;}

int main()
{
	cout<<minposition(2,3);
	cout<<minposition(1,1);
	
}

// given an array convert it into a number:::binary->decimal/////////////////////

#include<bits/stdc++.h>
using namespace std;
int main()5
{
	
//	int n=pow(2,4);
//	cout<<n;
	int a[5];
	
	for(int i=1;i<=5;i++)
	cin>>a[i];
	// 11001
	
	int L=4;
	int R=5;
	int num=0;
	for(int i=L;i<=R;i++)
	{
//	int n=R-L+1;
	num+=a[i]*pow(2,R-i);
}

cout<<num;
}

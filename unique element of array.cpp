#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[]={2,2,3,3,4,4,5,5,19,7,7,8,8,10,10};
	
	int s=a[0];
	
	int n = sizeof(a)/sizeof(a[0]);
	
	for(int i=1;i<n;i++)
	s=s^a[i];
	
	cout<<s;
}

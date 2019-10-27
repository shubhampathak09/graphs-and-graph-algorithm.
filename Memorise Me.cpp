#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={1,1,1,2,2,0};
	
	int max=a[0];
	for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		
		if(max<a[i+1])
		max=a[i+1];
		
	}
	
	int b[max]={ };
	
	for(int i=0;i<=max;i++)
	{
		for(int j=0;j<sizeof(a)/sizeof(a[0]);j++)
		{
			if(a[j]==i)
			b[i]++;
		}
	 }
	 cout<<b[0];
	 cout<<b[1];
	 cout<<b[2]; 
}

#include<bits/stdc++.h>

using namespace std;


int max;
 

int main()
{
	int a[]={1,1,1};

	int max=a[0];
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	
	int count[max]={0};
	
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
		
		if(a[i]==a[j])
		count[a[i]]++;
	}
	}
	
  for(int i=0;i<max;i++)
  cout<<count[i];
	

}

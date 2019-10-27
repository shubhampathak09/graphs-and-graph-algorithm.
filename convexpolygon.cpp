#include<bits/stdc++.h>

using namespace std;

// check if polygon can be made from n sides
// condition eb=very side must be lsess than sum of reaming sides

int main()
{
	
	int n=4;
	int a[4]={1,2,1,4};
	int flag;
	int sum=0;
	for(int i=0;i<n;i++)
	sum+=a[i];
	//cout<<sum;
	for(int i=0;i<n;i++)
	{
		flag=1;
		
		if(a[i]>=sum-a[i])
		{
			flag=0;
			break;
		}
		//cout<<a[i]<<sum-a[i];
		//cout<<flag;
	}
	if(flag==1)
	cout<<"sats";
	else
	cout<<"unsat";
	
}

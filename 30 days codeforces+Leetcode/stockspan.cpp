#include<bits/stdc++.h>
using namespace std;




int main()
{

//int a[]={75,60,70,85,90,80,100,70};

int a[]={100, 80, 60, 70, 60, 75, 85};

int n=sizeof(a)/sizeof(a[0]);

vector<int>stock(n,0);

for(int i=0;i<n;i++)
{
	int m=i;
	for(int j=i;j>=0;j--)
	{
		if(a[m]>=a[j])
		stock[i]++;
		else
		break;
	}
}

for(int i=0;i<n;i++)
cout<<stock[i];
	
}

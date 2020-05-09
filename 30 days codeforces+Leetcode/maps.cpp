#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int a[]={0,3,4,5,8};
	
	int sum=11;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	unordered_map<int,int>m;
	
	for(int i=0;i<n;i++)
	{
		
		m.insert({a[i],i});
		
	}
	
	
	map<int,int>::iterator it;
	for(int i=0;i<n;i++)
	{
		
		if(m.find(sum-a[i])!=m.end())
		{
		 
			 
			cout<<"indexes are.."<<i<<m.find(sum-a[i])->second;
			break;
		}
	}
	
	 
	
}

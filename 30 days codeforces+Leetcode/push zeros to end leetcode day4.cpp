
#include<bits/stdc++.h>

using namespace std;


int main()
{
	
	vector<int> a={0,1,2,3,0,0,1};
	int count=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=0)
		{
	 	a[count++]=a[i];
	 
		
		}
	 
		
	}
	while(count<a.size())
		{
		
		a[count]=0;
		count++;
	}
	
	for(auto x:a)
	cout<<x;
}

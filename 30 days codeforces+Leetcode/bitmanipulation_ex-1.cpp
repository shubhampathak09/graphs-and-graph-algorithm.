#include<bits/stdc++.h>

using namespace std;


// bitmanipulation ex-1

int main()
{
	
	int a[]={5,5,5,2,2,2,3,1,1,1,4,4,4};
	int result=0;
	vector<int>f(32,0);
	
	for(int x:a)
	{
		for(int i=0;i<32;i++)
		{
			if((1<<i)&x)
			f[i]++;
		}
	}
	
	 
	for(int i=0;i<32;i++)
	{
		 
	 result+=1<<i;
	}
	cout<<result;
}

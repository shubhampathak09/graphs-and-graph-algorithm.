#include<bits/stdc++.h>

//# leetcode count numbers
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	
	int a[]={1,3,2,3,5,0};
	
	multiset<int> s;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	s.insert(a[i]);
	
	// using iterators is advisable to avoid heap error in runtime
	
	int count=0;
    for(auto x:a)
    {
    	if(s.find(a[x]+1)!=s.end())
    	count++;
	}
	
	cout<<count;
}

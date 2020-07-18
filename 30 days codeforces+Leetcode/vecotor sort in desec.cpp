
// parallel binary search

#include<bits/stdc++.h>

using namespace std;


bool sortinrev(const int &a, const int &b)
{
 return a>b;
}

int main()
{
	
	vector<int>a{1,6,9,0,2,5,2,7,3,4,1};
	
	for(int i=0;i<a.size();i++)
	cout<<a[i];
	
	cout<<endl;
	
	sort(a.begin(),a.end(),sortinrev);
	
	for(int i=0;i<a.size();i++)
	cout<<a[i];
}

#include<bits/stdc++.h>

using namespace std;


vector<int> twosum(vector<int>a)
;

int main()
{
	
	vector<int>a{1,10,25,35,60};
	int flightduration=90;
	
	int toalsum=flightduration-30;
	
	unordered_map<int,int>m;
	
	for(int i=0;i<a.size();i++)
	{
		m[a[i]]=i;
	}
	 vector<int>ab;
	for(int i=0;i<a.size();i++)
	{
		int x=toalsum-a[i];
		if(m.find(x)!=m.end())
		{
			ab.push_back(m[a[i]]);
			ab.push_back(m[toalsum-a[i]]);
		}
	}
	return {ab[0],ab[1]};
}

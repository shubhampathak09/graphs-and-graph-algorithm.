
//check if spam

//[abc 0,abc 1,abed 0,dfnsd 0]

#include<bits/stdc++.h>

using namespace std;

int max(int a,int b)
{
	return a>b ? a : b;
}


int main()
{
	
	int n;
	cin>>n;
	
	unordered_map<string,pair<int,int>>m;
	int sum=0;
	
	while(n--)
	
	{
		string sample;
		bool spam;
		cin>>sample;
		cin>>spam;
		if(spam)
		{
			m[sample].first++;
			
		}
		else
		{
			m[sample].second++;
		}
		
	}
	
	for(auto it=m.begin();it!=m.end();it++)
	sum+=max(it->second.first,it->second.second);
	
	cout<<sum;
	
}

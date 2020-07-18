
#include<bits/stdc++.h>
using namespace std;

int max(const int &a,const int &b)
{
	return a>b ? a : b;
}

int min(const int &a,const int &b)
{
	return a<b ? a : b;
}

int main()
{
	
	vector<vector<int>>a={{0,0},{5,10},{13,23},{24,25}};
	
	vector<vector<int>>b={{1,5},{8,12},{15,24},{25,26}};
	//cout<<a.size();
	
	vector<vector<int>>v;
	
	int i=0,j=0;
	while(i<a.size()&&j<b.size())
	{
		
		int l=max(a[i][0],b[i][0]);
		int r=min(a[i][1],b[i][1]);
		
		if(l==r)
		cout<<l<<r;
		cout<<endl;
		  if(l<r||l==r)
		  {
	       cout<<l<<r<<"\t"<<endl;	  
		  v.push_back({l,r});
	}
		if(a[i][1]<b[i][1])
		i++;
		else
		j++;
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i][0]<<"\t"<<v[i][1]<<endl;
	}
}

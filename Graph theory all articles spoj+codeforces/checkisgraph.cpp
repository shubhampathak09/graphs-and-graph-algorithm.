#include<bits/stdc++.h>

using namespace std;

// havell-hakimi algorithm

bool checkisgraph(vector<int>&a,int n)
{
	while(1)
	{
		
		sort(a.begin(),a.end(),greater<int>());
		
		if(a[0]==0&&a[a.size()-1]==0)
		return true;
		
		int v=a[0];
		a.erase(a.begin()+0);
		
		if(v>a.size())
		return false;
		
		for(int i=0;i<v;i++)
		{
			a[i]--;
			if(a[i]<0)
			return false;
					
		}
		
	}
	
	
}


int main()
{
	vector<int>a={4,3,3,3,3};
	int n=a.size();	 
	checkisgraph(a,n) ? cout<<"Yes":cout<<"NO";
	
}

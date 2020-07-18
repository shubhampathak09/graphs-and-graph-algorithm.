// search occurences of all yhat location where that a given substring occours in text

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s="someday ill become the best among them";
	string ss="om";
	int n=s.length();
	int m=ss.length();
	
	// so,om,me,ed,da,ay  n-m+1 
	for(int i=0;i<n-m+1;i++)  //loop to slide over the patterns
	{
		int j;
		for(j=0;j<m;j++)
		{
			if(s[i+j]!=ss[j])
			break;
		}
		if(j==m)
		cout<<"pattern exist at.."<<i<<" and "<<i+j-1<<endl;
	}
	
}

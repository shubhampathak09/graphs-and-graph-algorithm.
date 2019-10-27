#include<bits/stdc++.h>

using namespace std;

bool checkanagram(string s1,string s2)
{
	int n1=s1.length();
	int n2=s2.length();
	
	if(n1!=n2)
	return false;
	
	
	int sum=0;
	
	for(int i=0;i<n1;i++)
	{
		sum^=s1[i]^s2[i];
	}
	
	
	if(sum==0)
	return true;
	
	else
	return false;
}


int main()
{
	
	cout<<checkanagram("mon","car");
}

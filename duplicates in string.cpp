// to print duplicates in string

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	string s="geeksforgeeks";
	
	int n=s.length();
	
	int count1[26];
	
	for(int i=0;i<26;i++)
	count1[i]=0;
	
	
	for(int i=0;i<n;i++)
	{
	count1[s[i]-'a']++;	
	}
	
	for(int i=0;i<26;i++)
	{
		if(count1[i]>1)
		{
		
		char c=i+'a';            // very imp step
		cout<<c<<endl;
	}
	
	}
	
	
}

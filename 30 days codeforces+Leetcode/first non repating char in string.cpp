#include<bits/stdc++.h>

using namespace std;


int main()
{
	
	string s="leetcode";
	//	string s1="loveleetcode";
	
	
	
	 unordered_multimap<char,int>m;
	
	for(int i=0;i<s.length();i++)
	{
		
		m.emplace(s[i],i);
		
	}
	
	
	
	unordered_multimap<char,int>::iterator i;
	
	for(i=m.begin();i!=m.end();i++)
	{
	cout<<i->first<<".."<<i->second<<"\n";	
		 
	}
	
	
	// now
	
//		multimap<int,char>::iterator it;
//		
//		for(i=m.begin();i!=m.end();i++)
//		{
//			
//			 
//			
//			cout<<m.count(i->first)<<"\n";
//			
//		}
		
	
	
	}

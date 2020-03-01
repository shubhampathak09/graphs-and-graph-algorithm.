#include<bits/stdc++.h>

using namespace std;
 
 
int main()
{
	
	string str="geeksforgeeks";
	
	unordered_multiset<char> sample;
	
	int m=str.length();
	
	for(int i=0;i<m;i++)
	{
		sample.insert(str[i]);
	}
	
	cout<<sample.count('g');
	
 } 

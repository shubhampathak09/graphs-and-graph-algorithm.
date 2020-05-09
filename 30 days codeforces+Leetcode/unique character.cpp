#include<bits/stdc++.h>

using namespace std;




int countuniquechar(string s)
{
	
	map<char,int> m;
	for(int i=0;i<s.length();i++)
	{
		map<char,int>::iterator it=m.find(s[i]);
		
		if(it==m.end())
		m.insert({s[i],m[s[i]]++});
		else
		m[s[i]]++;
	}
	
	for(int i=0;i<s.length();i++)
	if(m[s[i]]==1)
	return i;
	
	return -1;
	
}

int main()
{
	
	 string s1="loveleetcode";
	 
	 cout<<countuniquechar(s1);
	
}

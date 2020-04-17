
#include<bits/stdc++.h>

using namespace std;


string simplifyString(string str)
{
	
	string temp="";
	
	deque<char>q;
	
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!='#')
		q.push_back(str[i]);
		else
		q.pop_back();
	}
	while(q.empty()==false)
	{
	  char c=q.front();
	  q.pop_front();
	  temp+=c;
	}
	return temp;
}

bool comparestrings(string s1,string s2)
{
	
	if(s1.length()!=s2.length())
	return false;
	
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]!=s2[i])
		return false;
		 
	}
	return true;
	
}

int main()
{
	string s="a##c"; //csdcdcd
	
	string s1="#a#c";
	//cout<<simplifyString(s);
	
	cout<<comparestrings(simplifyString(s),simplifyString(s1));
	
}

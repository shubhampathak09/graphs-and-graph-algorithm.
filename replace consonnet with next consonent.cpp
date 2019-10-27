#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	return true;
	else
	return false;
}

string replaceconsonent(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(!isvowel(s[i]))
		{
			if(s[i]=='z')
			s[i]='b';
			else
			{
				s[i]=s[i]+1;
				if(isvowel(s[i]))
				s[i]=s[i]+1;
			}
		}
	}
	return s;
}
int main()
{
//	cout<<"hi";
	string s="geeksforgeeks";
	cout<<replaceconsonent(s);
}

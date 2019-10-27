#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	return true;
	else
	return false;
}
string replacewithnearestvowel(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(isvowel(s[i]))
		continue;
		else 
		{
			if(s[i]>'a'&& s[i]<'e')
			{
			if(abs(s[i]-'a')>abs(s[i]-'e'))
			s[i]= 'e';
			else
			s[i]= 'a';	
			}
			if(s[i]>'e'&& s[i]<'i')
			{
			if(abs(s[i]-'e')>abs(s[i]-'i'))
			s[i]= 'i';
			else
			s[i]= 'e';	
			}
			if(s[i]>'i'&& s[i]<'o')
			{
			if(abs(s[i]-'i')>abs(s[i]-'o'))
			s[i]= 'o';
			else
			s[i]= 'i';
			}
			if(s[i]>'o'&& s[i]<'u')
			{
			if(abs(s[i]-'o')>abs(s[i]-'u'))
			s[i]= 'u';
			else
			s[i]= 'o';
		}
			else if(s[i]>'u')
			 s[i]='u';
			}
			 }
    return s;			 
	}

int main()
{
	//cout<<"hi";
	cout<<replacewithnearestvowel("geeksforgeeks");
}

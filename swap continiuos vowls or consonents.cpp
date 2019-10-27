#include<bits/stdc++.h>
using namespace std;


bool isvowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	return true;
	else
	return false;
}
string swapcontinious(string s)
{
	for(int i=0;i<s.length();i++)
	{
		if(isvowel(s[i])&&isvowel(s[i+1])||!isvowel(s[i])&&!isvowel(s[i+1]))
		swap(s[i],s[i+1]);
	}
	return s;
}
int main()
{
	cout<< swapcontinious("geeksforgeeks");
	//cout<<"hi";
	
}

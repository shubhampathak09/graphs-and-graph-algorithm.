#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	return true;
	else return false;
	
}
string replacementsand(string s)
{
	string updated="";
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(i==0||i==n-1)
		{
			updated+=s[i];
			continue;
		}
		if(isvowel(s[i]) && !isvowel(s[i-1]) && !isvowel(s[i+1]))
	     {
	     	continue;
			 }
			 else
			 updated+=s[i];	
	}
	return updated;
}
int main()
{
	//cout<<"hi";
	string s="fof";
	 cout<<replacementsand(s);
}

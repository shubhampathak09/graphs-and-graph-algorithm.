// permutations of string 

#include<bits/stdc++.h>
using namespace std;



bool checkPerm(string s1,string s2)
{
	
	vector<int>count(26,0);
for(int i=0;i<s1.length();i++)
{
	count[s1[i]-'a']++;
	}	
	
	for(int j=0;j<s2.length();j++)
	{
		int idex=s2[j]-'a';
		if(count[idex]!=0)
		count[idex]--;
	}
	for(int i=0;i<s1.length();i++)
	if(count[i]!=0)
	return false;
	
	return true;
}


int main()
{
//	char s='A';
//	
//	putchar(tolower(s));
	
	cout<<checkPerm("ab","eidboaoo");
}

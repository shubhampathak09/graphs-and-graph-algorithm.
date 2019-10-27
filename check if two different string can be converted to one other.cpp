#include<bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	return true;
	else
	return false;
	
}
bool checkconverted(string s1,string s2)
{
	int l1=s1.length();
	int l2=s2.length();
	if(l1!=l2)
	return false;
	for(int i=0;i<l1;i++)
	{
		if(isvowel(s1[i])&&isvowel(s2[i]))
		continue;
		else if(!isvowel(s1[i])&&!isvowel(s2[i]))
		continue;
		else
		return false;
	}
	return true;
}
int main()
{
	//cout<<"hi";
	string s1="abcgle";
	string s2="ezgglm";
	 if(checkconverted(s1,s2))
	 {
	 	cout<<"yes";
	 }
	 else
	 cout<<"no";
}

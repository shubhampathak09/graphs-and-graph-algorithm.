#include<bits/stdc++.h>
using namespace std;

bool checksubsequence(string pattern,string text)
{
	
	int i=0;
	int j=0;
	while(i<pattern.length()&&j<text.length())
	{
		if(pattern[i]==text[j])
		i++;
		j++;
	}
	
	return i==pattern.size();
}

int main()
{
	
	string s="abcd";
	string p="ghadcbcertd";
	
	if(checksubsequence(s,p)==true)
	cout<<"Pattern exsists";
	else
	cout<<"Pattern does not exsist";
}



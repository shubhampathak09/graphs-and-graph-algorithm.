#include<bits/stdc++.h>

using namespace std;



int convertonum(string s)
{
	int m=s.length();
	
	int num=0;
	for(int i=0;i<m;i++)
	{
		
		int x=s[i]-'0';
		
		num=num*10 + x;
	}
	return num;	
	
}

int addnum(string s1,string s2)
{
	int num1=convertonum(s1);
	int num2=convertonum(s2);
	return num1+num2;
	
}

int main()
{
	
//	string s="312234";

	cout<<addnum("123","321");

}

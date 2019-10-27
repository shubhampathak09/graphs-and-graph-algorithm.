#include<bits/stdc++.h>
using namespace std;

void copystring(char s1[],char s2[],int index=0)
{
	s2[index]=s1[index];
	
	if(s1[index]=='\0')
	return;
	
	copystring(s1,s2,index+1);
}

int main()
{
	char s1[]="GEEK for GEEK";
	char s2[]="cndjnsdj";
	copystring(s1,s2);
	cout<<s2;
}

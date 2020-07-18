#include<bits/stdc++.h>

using namespace std;

void rev(char *begin,char *end)
{
	while(begin<end);
	char temp=*begin;
	*begin++=*end;
	*end--=temp;
	
}

int main()
{
	
 char s[]="cats";
 
 //int a[]={1,1,1,1,1};
 
 int len=sizeof(s)/sizeof(s[0]);
 cout<<*s;
 cout<<*(s+len-2);
 
 rev(s,s+len-2);
 
 
 rev(s,*(s+len-2));
 
	
}

#include<bits/stdc++.h>

using namespace std;



int startsWith(char *string,char *prefix) {

if(prefix=="")
return 1;

int stringSize=strlen(string);
int prefixSize=strlen(prefix);

 if(prefixSize>stringSize)
	return 0;

int k=0;

while(k<prefixSize)
{
if(prefix[k]!=string[k])
return 0;
k++;
}
return 1;
}
int main()
{
	
cout<<startsWith("", "");
  cout<<startsWith("abc", "");
  cout<<startsWith("hello world!", "hello");
  cout<<startsWith("hello world!", "HELLO");
  cout<<startsWith("nowai", "nowaisir");	
	
}
  


#include<bits/stdc++.h>
using namespace std;

char firstupper(string str,int i=0)
{
	if(str[i]=='\0')
	return 0;
	if(isupper(str[i]))
	return str[i];
	return firstupper(str,i+1);
}
int main()
{
	cout<<firstupper("GeeKforgeeK");
}


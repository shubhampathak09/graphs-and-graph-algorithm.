#include<bits/stdc++.h>

using namespace std;


void reverse(char *start,char *end)
{
	while(start<end)
	{
	
	char temp=*start;
	*start++=*end;
	*end--=temp;
}
	
}

void reverseword(char *s)
{
char *word_begin=s;
char *temp=s;
	
	while(*temp)
	{
		
	temp++;
	if(*temp=='\0')	
		{
			reverse(word_begin,temp--);
		}
		else if(*temp==' ')
		{
			reverse(word_begin,temp--);
			word_begin=temp+1;
		}
		
	}
	
	reverse(s,temp-1);
}

int main()
{
	
	char s[]="Coding Champion Here REVERSE n";
	reverseword(s);
}

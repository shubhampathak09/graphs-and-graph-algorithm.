#include<bits/stdc++.h>

using namespace std;


void swap(char *a,char * b)
{
	
	char temp=*a;
	*a=*b;
	*b=temp;
	
}


void permutationgenerator(string s,int l,int r)
{
	
	if(l==r)
	{
    cout<<s<<endl;	
	return;
}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(&s[i],&s[l]);
			
			permutationgenerator(s,l+1,r);
			
			swap(&s[i],&s[l]);     //backtrack
		}
	}
}
int main()
{
	string s="shu";
	
	int l=0;
	int r=s.length()-1;
	
	permutationgenerator(s,l,r);
	
}

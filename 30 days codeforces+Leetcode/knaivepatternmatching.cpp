#include<bits/stdc++.h>

using namespace std;


// knaive pattern matching

int main()
{
	//string ="geek"
	//////////// 0      7       15     22     29
	string text="bbabaxababa";
	string pattern="aba";
	
	int n=text.length();
	int m=pattern.length();
	
	for(int i=0;i<n-m+1;i++)
	{
		int flag=0;
		for(int j=0;j<m;j++)
		{
			if(text[i+j]!=pattern[j])
			flag=1;
		}
		if(flag==0)
		cout<<"pattern found at index.."<<i<<endl;
		}	
	
}

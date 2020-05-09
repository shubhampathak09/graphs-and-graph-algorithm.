// printitng the longest palindromic subsequencre

#include<bits/stdc++.h>

using namespace std;

bool is_palindrome(string s)
{
	string temp=s;
	reverse(temp.begin(),temp.end());
	return temp==s;
}


string palindromicsub(string input)
{
	
	int best_len=0;
	string best_str="";
	int n=input.length();
	for(int l=0;l<n;l++)
	{
		for(int r=l;r<n;r++)
		{
			int len=r-l+1;
			string sub=input.substr(l,len);
			if(is_palindrome(sub)&&len>best_len)
			{
				best_str=sub;
				best_len=len;
			}
		}
	}
	
	return best_str;
}

int main()
{
	string s="dcdcwdcsdcsdcn";
	
	cout<<palindromicsub(s);
	
}

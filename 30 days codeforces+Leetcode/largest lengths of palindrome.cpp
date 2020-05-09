#include<bits/stdc++.h>

using namespace std;


bool is_palindrome(string s)
{
	
	string rev=s;
	reverse(rev.begin(),rev.end());
	return s==rev;
	
}

int palindromicsubs(string s)
{
	
	int n=s.length();
	int ans=INT_MIN;
	for(int l=0;l<n;l++)
	{
		for(int r=l;r<n;r++)
		if(is_palindrome(s.substr(l,r-l+1)))
		ans=max(ans,r-l+1);
	}
	
	return ans;
}

int main()
{
	string str = "forgeeksskeegfor"; 
	cout<<palindromicsubs(str);
	
}

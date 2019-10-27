#include<bits/stdc++.h>

using namespace std;

int getlongest(string s)
{
	stack<int>stk;
	stk.push(-1);
	int result=0;
	
	int n=s.length();
	
	for(int i=0;i<n;i++)
	{
		if(s[i]=='(')
		stk.push(s[i]);
		
		else
		{
			stk.pop();
			if(!stk.empty())
			result=max(result,i-stk.top());
			else
			stk.push(i);
		}
		
	}
	
	return result;
}

int main()
{
	string s="()(()))";
	
	cout<<getlongest(s);
}

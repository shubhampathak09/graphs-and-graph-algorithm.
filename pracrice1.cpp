
#include<bits/stdc++.h>
using namespace std;

bool checkbalanced(string s)
{
	
	char x;
	stack<char>stk;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='{'||s[i]=='('||s[i]=='[')
		stk.push(s[i]);
		
		if(stk.empty())
		return false;
		
		switch(s[i])
		{
			case ')':
				x=stk.top();
				stk.pop();
				if(x=='['||x=='{')
				return false;
				break;
				case '}':
				x=stk.top();
				stk.pop();
				if(x=='('||x=='[')
				return false;
				break;
				
				case ']':
				x=stk.top();
				stk.pop();
				if(x=='('||x=='{')
				return false;
				break;		
		}
		
	}
	
	return (stk.empty());
}

int main()
{
	
	string s="(){}{{{}}}[}]";
	
	if(checkbalanced(s))
	cout<<"Yes";
	else
	cout<<"No";
}

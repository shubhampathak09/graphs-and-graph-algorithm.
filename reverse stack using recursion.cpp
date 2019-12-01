#include<bits/stdc++.h>

using namespace std;

void insertbot(int x,stack<int>s)
{
	
	if(s.size()==0)
	s.push(x);
	else
	{
		int a=s.top();
		s.pop();
		insertbot(x,s);
		s.push(a);
	}
	
}

void reverse(stack<int>s)
{
	
	if(s.size()>0)
	{
		int a=s.top();
		s.pop();
		reverse(s);
		insertbot(a,s);
	}
	
}

int main()
{
	
	
	stack<int> s1;
	
	s1.push(1);
	s1.push(7);
	s1.push(6);
	s1.push(2);
	
	reverse(s1);
	
	while(!s1.empty())
	{
		
		cout<<s1.top()<<endl;
		s1.pop();
	}
	
	
	
}





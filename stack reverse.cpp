#include<bits/stdc++.h>

using namespace std;

stack<int>s1,s2;

printstack(stack<int> s1)
{
	stack<int> s2;
  	
  		
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
		
	}
	while(!s2.empty())
	{
		cout<<s2.top();
		s2.pop();
	}
	
}

int sum=0;

int stacksum(stack<int>s)
{
	
	while(!s.empty())
	{
		sum=sum+s.top();
		s.pop();
	}
	return sum;
}

int main()
{
	
	s1.push(1);
	
	s1.push(2);
	
	s1.push(3);
	
   printstack(s1);
   
   
   cout<<stacksum(s1);
   
   
	
}

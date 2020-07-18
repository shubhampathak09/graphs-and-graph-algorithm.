// Min stack

#include<bits/stdc++.h>

using namespace std;

class minStack
{
	
	
	public:
		stack<pair<int,int>>s;
		
		minStack()
		{
			
		}
		
		void push(int x)
		{
			if(s.empty())
			s.push({x,x});
			else
			s.push({x,min(x,s.top().second)});
		}
		
		void pop()
		{
			if(!s.empty())
			s.pop();
					}
		
		int top()
		{
			if(s.empty())
			return -1;
			
			return s.top().first;
		}
		int getMin()
		{
			if(s.empty())
			return -1;
			return s.top().second;
		}
	
};
int main()
{
	
	minStack m;
	
	m.push(3);
	m.push(5);
	m.push(6);
	m.push(5);
	m.push(1);
	m.push(10);
	m.push(2);
	
	cout<<m.top();
	cout<<m.getMin();
	
	cout<<endl;
	
	m.pop();	
	m.pop();
	m.pop();
	
 	cout<<m.top();
	cout<<m.getMin();
	return 0;	
}

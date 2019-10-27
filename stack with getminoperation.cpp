#include<bits/stdc++.h>
using namespace std;

class Stack
{
	private:
    static const int max=100;
    int top;
    int arr[max];
    
    public:
    	stack()
    	{
    		top=-1;
		}
		bool isempty();
		bool isfull();
		int pop();
		void push(int x);
	
};

bool Stack::isempty()
{
	if(top==-1)
	return true;
	else
	return false;
	
}

bool Stack::isfull()
{
	if(top==max-1)
	return true;
	else
	return false;
	
}

int Stack::pop()
{
	if(!isempty())
	{
		int x=arr[top];
		top--;
		return x;
	}
}

void Stack::push(int x)
{
	if(!isfull())
	{
		top++;
		arr[top]=x;
	}
	
}


int main()
{
	Stack s;
	s.push(1);
	s.push(2);
}

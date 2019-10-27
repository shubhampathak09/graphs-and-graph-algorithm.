#include<bits/stdc++.h>

using namespace std;

int main()
{
	queue<int>q1,q2;
	q1.push(3);
	q1.push(2);
	q1.push(1);
	
	q2.push(1);
	q2.push(3);
	q2.push(2);
	
	int result=0;
	while(!q2.empty())
	{
		if(q1.front()!=q2.front())
		{
			int x=q1.front();
			q1.pop();
			q1.push(x);
			result++;
		}
		else
		{
			q1.pop();
			q2.pop();
			result++;
		}
	}
	cout<<result;
	
}

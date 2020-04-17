// nested brackets

#include<bits/stdc++.h>
using namespace std;

//231
// ((2(3))1)
//4
// ((((4))))
// 2314
// ( ( 2 (3) ) 1( ( (4) )) )

int main()
{
	string s="444";
	
	int depth=0;
	
	for(int i=0;i<s.length();i++)
	{
		int digit=s[i]-'0';
		for(int i=0;i<max(0,digit-depth);i++)
		{
			cout<<"(";
		}
		for(int i=0;i<max(0,depth-digit);i++)
		{
			cout<<")";
		}
		
		cout<<digit;
		depth=digit;
	}
	for(int i=0;i<depth;i++)
	cout<<")";
	
}

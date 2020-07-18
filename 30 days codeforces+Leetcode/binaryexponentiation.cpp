#include<bits/stdc++.h>

using namespace std;


// binary exponentiation

#include<bits/stdc++.h>

using namespace std;

int power(int a,int b)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	
	int tmp=power(a,b/2);
	int result=tmp*tmp;
	if(b%2==1)
	return a*result;
	
	return result;
}
int main()
{

int a=3;
int b=8;

cout<<power(a,b);
	
}

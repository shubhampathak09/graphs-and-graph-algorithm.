#include<bits/stdc++.h>

using namespace std;

// gonna do a collatz conjecture
// seuquernce such that if n is even then n-n/2 and if nis odd then n=3n+1 all the way till n=1

//int steps=0;
void collatzconjecture(int n)
{
	
	if(n==1)
	{
		cout<<n;
        return;
//		return steps;
	}
	
	
	
	if(n%2==0)
	{
//	steps++;
	cout<<n<<"\t";
	collatzconjecture(n/2);
}
	else
	{
//		steps++;
    cout<<n<<"\t";	
	collatzconjecture(n*3+1);
}
//return steps;
}


int main()
{

collatzconjecture(10);
//cout<<"\n"<<steps;
//cout<<collatzconjecture(10);	
}

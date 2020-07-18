// Coin Piles
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int a;
	int b;
	cin>>a>>b;
	
	cout<<((a+b)%3==0&&(2*a)>=b&&(2*b)>=a ? "Yes" : "No");
	
}

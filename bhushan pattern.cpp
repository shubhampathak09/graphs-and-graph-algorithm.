#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int i=1;
	
	while(i<=5)
	{
		
	 for(int j=5-i;j>0;j--)
	 cout<<" ";
	 
	 for(int k=1;k<=i;k++)
	 cout<<"*";
	 cout<<"\n";
	 i++;
	}
}

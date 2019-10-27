#include<bits/stdc++.h>

using namespace std;

int main()
{
	int x1,x2,y2,y1;
	
	 int n;
	 
	 int count=0;
	 
	 cin>>n;
	 while(count<n)
	 {
	 	
	 	cin>>x1>>y1>>x2>>y2;
	 	cout<<2*x2-x1<<"\t"<<2*y2-y1<<"\n";
	 	count++;
	 }
	
}

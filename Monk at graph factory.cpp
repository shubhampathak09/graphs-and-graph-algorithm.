  

#include <iostream>

using namespace std;

int main() {
	 int n;
	 
	 int a;
	 
	 
	 
	 cin>>n;
	 
	 int s=2*n-2;
	 
	 int sum=0;
	 while(n!=0)
	 {
	     cin>>a;
	     sum=sum+a;
	     n--;
	 }
	    if(sum==s)
	    cout<<"Yes";
	    else
	    cout<<"No";
	 return 0;
	 // Writing output to STDOUT
}
 

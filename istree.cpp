 #include <iostream>

using namespace std;

int main() {
	 int n;
	 
	 int a;
	 cin>>n;
	 
	 int sum=0;
	 while(n!=0)
	 {
	     cin>>a;
	     sum=sum+a;
	     n--;
	 }
	 if(sum==2)
	 cout<<"Yes";
	 
	 else{
	 
	 sum=sum/2;
	 
	 if(sum%2==0)
	 cout<<"Yes";
	 else
	 cout<<"No";
}
	 // Writing output to STDOUT
}


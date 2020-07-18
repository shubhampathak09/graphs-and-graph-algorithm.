// increasing array

 // modify the array so that it is increasing
 
 #include<bits/stdc++.h>
 
 using namespace std;
 
 int main()
 {
 	
 	
 	int a[]={3,2,1,5,7};
 	int n=sizeof(a)/sizeof(a[0]);
 	int mx=0;
 	int ans=0;
 	
 	for(int i=0;i<n;i++)
 	{
 		mx=max(a[i],mx);
 		ans+=mx-a[i];
	 }
 	cout<<ans;
 }

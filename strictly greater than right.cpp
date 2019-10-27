#include<bits/stdc++.h>

using namespace std;


struct node
{
	int data;
	struct node*left;
	struct node*right;
};


int main()
{

int a[]={16,17,4,3,5,2};

int n=sizeof(a)/sizeof(a[0]);
 
 int i;
 int j;
  
  for(i=0;i<n;i++)
  {
  	int flag=1;
  	for(int j=i+1;j<n;j++)
  	{
  		if(a[i]<a[j])
  		{
		  flag=0;
  		break;
  	}
	  }
	  if(flag==1)
	  cout<<a[i];
  	
  	
  }
	
}

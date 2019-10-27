#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	 int  i,n,p,count,flag;
   // printf("Enter the number\n") ;
  //  scanf("%d",&n) ;
  
  cin>>n;
  int prime[n+1];
  prime[0]=1;
 // prime[1]=2;
  int j=1;
   // printf("First %d prime numbers are \n",n) ;
    
    p=2;
    i=1; 
    while(i<=n)
    {
        flag=1;
        for(count=2;count<=p-1;count++)
        {
            if(p%count==0)  //Will be true if p is not prime
            {
             flag=0;
             break;      //Loop will terminate if p is not prime
            }  
        }
            if(flag==1)
            {
           //     printf("%d ",p) ;
                prime[j]=p;
                j++;
             i++;
            }
        p++;
}

//cout<<endl;
for(int i=0;i<n;i++)
cout<<prime[i];
}
	


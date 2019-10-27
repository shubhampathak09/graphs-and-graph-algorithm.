
#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void heapify(int a[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n&&a[l]>a[largest])
	largest=l;
	if(r<n&&a[r]>a[largest])
	largest=r;
	
	if(i!=largest)
{
	swap(&a[i],&a[largest]);
	heapify(a,n,largest);
}
	
}

void buildmaxheap(int a[],int n)
{
	int start=n/2-1;
	for(int i=start;i>=0;i--)
	{
		heapify(a,n,i);
	}
}

int main()
{
    int a[]={1,3,5,4,6,13,10,9,8,15,17};
	int n=sizeof(a)/sizeof(a[0]);
	
	buildmaxheap(a,n);
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
 

#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void printarr(int a[],int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i];
}

void heapify(int a[],int n,int i)
{
	int largest=i;;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n&&a[l]>a[largest])
	largest=l;
	
	if(r<n&&a[r]>a[largest])
	largest=r;
	
	if(largest!=i)
	{
		swap(&a[largest],&a[i]);
		heapify(a,n,largest);
	}
}

void heapsort(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	heapify(a,n,i);
	
	for(int i=n-1;i>=0;i--)
	{
		swap(&a[i],&a[0]);
		//heapify(a,n,i);
		heapify(a,i,0);
	}
}

int main()
{
	int a[]={5,3,1,6,2,7,9,0};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	heapsort(a,n);
	
	printarr(a,n);
	
}

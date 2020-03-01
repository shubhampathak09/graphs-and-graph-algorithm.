#include<bits/stdc++.h>

using namespace std;


void swap(int *a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
	
}

void heapify(int a[],int n,int i)
{
	
	int left=2*i+1;
	int right=2*i+2;
	int largest=i;
	
	if(left<n&&a[left]>a[largest])
	largest=left;
	if(right<n&&a[right]>a[largest])
	largest=right;
	if(largest!=i)
	{
		swap(&a[largest],&a[i]);
		heapify(a,n,largest);
	}
	
}

void buildheap(int a[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		
		heapify(a,n,i);
	}
}
//
//void heapsort(int a[],int n)
//{
//	buildheap(a,n);
//	
//	for(int i=n-1;i>=0;i++)
//	{
//		swap(&a[i],&a[0]);
//		heapify(a,i,0);
//	}
//}


void heapsort(int a[],int n)
{
	buildheap(a,n);
	
	for(int i=n-1;i>=0;i--)
{
	swap(&a[i],&a[0]);
	heapify(a,i,0);
}
	
}


void printarray(int a[],int n)
{
	
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}

int main()
{
	int a[]={5,3,7,8,2,1,0,19,45};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	//buildheap(a,n);
	
//	cout<<"Before sorting..."<<endl;
//		printarray(a,n);
	
	
	
	heapsort(a,n)
;	
  printarray(a,n);
	
	

	
//	cout<<endl;
	
//	cout<<"after sorting..."<<endl;
	
//	heapsort(a,n);
	
//	printarray(a,n);
	
	
}


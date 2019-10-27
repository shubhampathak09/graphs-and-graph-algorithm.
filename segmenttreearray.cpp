#include<bits/stdc++.h>
using namespace std;

 

void constructtree(int input[],int segtree[],int low,int high,int pos)
{
	
	if(low==high)
	{
		segtree[pos]=input[low];
		return;
		
	}
	
	int mid=(low+high)/2;
	
	constructtree(input,segtree,low,mid,2*pos+1);
	constructtree(input,segtree,mid+1,high,2*pos+2);
	segtree[pos]=min(segtree[2*pos+1],segtree[2*pos+2]);
	
}

int main()
{
	int input[]={-1,2,4,0};
	
	int segtree[7]={INT_MAX};
	
	int low=0;
	int high=3;
	int pos=0;
	
	constructtree(input,segtree,low,high,pos);
	
	for(int i=0;i<7;i++)
	{
		cout<<segtree[i];
	}
	
}


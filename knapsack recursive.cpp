
#include<bits/stdc++.h>

using namespace std;


int max(int a,int b)
{
	return a>b ? a: b;
}

int knapsack(int W,int wt[],int val[],int n)
{
	
	
	// base case of knap sack
	if(n==0||W==0)
	return 0;
	
	
	//if last element has weight greater W dont consider it
	if(wt[n-1]>W)
	return knapsack(W,wt,val,n-1);
	
	// max of including the nth element and excluding it!
	
	else
	return max(val[n-1]+knapsack(W-wt[n-1],wt,val,n-1),knapsack(W,wt,val,n-1));
	
	
}


int main(){
	// recursive impl
	int W=4;
	int wt[]={1,2,3};
	int val[]={4,5,6};
	int n=sizeof(wt)/sizeof(wt[0]);
	
	cout<<knapsack(W,wt,val,n);
}

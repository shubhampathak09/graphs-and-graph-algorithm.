#include<bits/stdc++.h>

using namespace std;
#define R 4
#define C 4

void spiraltraversal(int a[R][C],int i,int j,int m,int n)
{
	if(i>=m||j>=n)
	return;
	
	for(int p=i;p<n;p++)
	cout<<a[i][p]<<" ";
	
	for(int p=i+1;p<m;p++)
	cout<<a[p][n-1]<<" ";
	if(m-1!=i)
	for(int p=n-2;p>=1;p--)
	cout<<a[m-1][p]<<" ";
	if(n-1!=j)
	for(int p=m-2;p>=1;p--)
	cout<<a[p][j]<<" ";
	
	spiraltraversal(a,i+1,j+1,m-1,n-1);
}

int main()
{
	
	int a[R][C]={{1,2,3,4},{5,6,7,8},{10,11,12,13},{17,18,19,20}}
	
	;spiraltraversal(a,0,0,4,4);
}

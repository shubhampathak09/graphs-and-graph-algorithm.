/*
Avery has an array of N positive integers. The i-th integer of the array is Ai.

A contiguous subarray is an m-countdown if it is of length m and contains the integers m, m-1, m-2, ..., 2, 1 in that order. For example, [3, 2, 1] is a 3-countdown.

Can you help Avery count the number of K-countdowns in her array?

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integers N and K. The second line contains N integers. The i-th integer is Ai.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of K-countdowns in her array.

Limits
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 = T = 100.
2 = K = N.
1 = Ai = 2 � 105, for all i.

Test set 1
2 = N = 1000.

Test set 2
2 = N = 2 � 105 for at most 10 test cases.
For the remaining cases, 2 = N = 1000.

Sample

Input
 	
Output
 
3
12 3
1 2 3 7 9 3 2 1 8 3 2 1
4 2
101 100 99 98
9 6
100 7 6 5 4 3 2 1 100

  
Case #1: 2
Case #2: 0
Case #3: 1

  
In sample case #1, there are two 3-countdowns as highlighted below.
1 2 3 7 9 3 2 1 8 3 2 1
1 2 3 7 9 3 2 1 8 3 2 1

In sample case #2, there are no 2-countdowns.

In sample case #3, there is one 6-countdown as highlighted below.
100 7 6 5 4 3 2 1 100


*/
#include<bits/stdc++.h>
using namespace std;

int Kcountdown(int a[],int n,int k)
{
	int ans=0;
	int nxt=k;
	
	for(int i=0;i<n;i++)
	{
	//cout<<a[i]<<" "<<k<<endl;
	if(a[i]!=nxt)
	{
		nxt=k;
	}
		if(a[i]==nxt)
		{
			nxt--;
			if(nxt==0)
			{
				
				ans++;
				nxt=k;
	//			cout<<ans<<endl;
			}
		}
		 
	}
	return ans;
}

int main()
{
	
	
	int a[]={3,2,1,4,5,6,8,9,3,2,0,3,2,1,1,3,3,2,1,1};
//	int a1[]={}
	int k=3;
	int n=sizeof(a)/sizeof(a[0]);
	
	cout<<Kcountdown(a,n,k);
}


/*
C - Vacation / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
100
 points

Problem Statement
Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.

The vacation consists of 
N
 days. For each 
i
 (
1
=
i
=
N
), Taro will choose one of the following activities and do it on the 
i
-th day:

A: Swim in the sea. Gain 
a
i
 points of happiness.
B: Catch bugs in the mountains. Gain 
b
i
 points of happiness.
C: Do homework at home. Gain 
c
i
 points of happiness.
As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.

Find the maximum possible total points of happiness that Taro gains.
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	cin>>n;
	vector<int>dp(3);
	
	for(int i=0;i<n;i++)
	{
		
		vector<int>new_dp(3,0);
		vector<int>a(3);
		
		for(int i=0;i<3;i++)
		cin>>a[i];
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i!=j)
				{
					new_dp[j]=max(new_dp[j],a[j]+dp[i]);
				}
			}
		}
		dp=new_dp;
	}
	
	cout<<max(dp[0],max(dp[1],dp[2]));
}

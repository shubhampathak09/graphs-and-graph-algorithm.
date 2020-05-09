#include<bits/stdc++.h>

using namespace std;

const int INF=1e9+5;

int findMinCost(vector<int>a,int n,int k){
	
	vector<int>dp(n,INF);
	dp[0]=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=i+k;j++)
		{
			if(j<n)
			{
				
				dp[j]=min(dp[j],dp[i]+abs(a[j]-a[i]));
				
			}
		}
		
	}
	return dp[n-1];
}

int main(){
	
	vector<int>a{40,10,20,70,80,10,20,70,80,60};
	int k=4;
	int n=a.size();
	cout<<findMinCost(a,n,k);
}

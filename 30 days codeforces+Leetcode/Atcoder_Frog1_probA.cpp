
#include<bits/stdc++.h>

using namespace std;


const int INF=1e9+5;

int abs(int a)
{
	return a<0 ? -1*a : a;
}

int max(int a,int b)
{
	return a>b ? b :a;
}

int findMinCostJump(vector<int> a,int n)
{ 

vector<int> dp(n,INF);
dp[0]=0;
for(int i=0;i<n;++i)
{
	for(int j:{i+1,i+2})
	{
		if(j<n)
		{
		dp[j]=min(dp[j],dp[i]+abs(a[j]-a[i]));	
		}
	}
}
return dp[n-1];
}

int main()
{
	
	vector<int> a={10,10,20,50,60,30,20};
	int n=a.size();
	
	cout<<findMinCostJump(a,n);
}

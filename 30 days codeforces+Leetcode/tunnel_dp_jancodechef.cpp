#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	
	int n,k;
	cin>>n>>k;
	
	string a[101];
	int dp[101];
	int visited[101];
	// inserting the elements of string
	
	
	for(int i=1;i<=n;i++)
	{
	dp[i]=INT_MAX;
	visited[i]=0;
	cin>>a[i];
	
	
}
dp[1]=0;
queue<int> q;
q.push(1);

while(!q.empty())
{
	
	int  node=q.front(); 
	q.pop();
	
	if(visited[node])
	continue;
	
	for(int i=node+1;i<=n&&i-node<=k;i++)
	{
	if(a[node][i-1]=='1'&&visited[i]==0&&dp[i]>dp[node]+1)
	{
		dp[i]=dp[node]+1;
		q.push(i);
		}
					
	}
	
		for(int i=node-1;i>=n&&node-i<=k;i--)
	{
	if(a[node][i-1]=='1'&&visited[i]==0&&dp[i]>dp[node]+1)
	{
		dp[i]=dp[node]+1;
		q.push(i);
		}
					
	}
	
     visited[node]=1;	
	
	
}

int ans=dp[n];

if(ans==-1)
cout<<-1;

cout<<dp[n];

}



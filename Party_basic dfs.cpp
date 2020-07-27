// party codeforces
#include<bits/stdc++.h>
using namespace std;

int mx=-1;
vector<int>v[20001];
void dfs(int x,int level)
{
	mx=max(mx,level);
	for(int i=0;i<v[x].size();i++)
	{
		dfs(v[x][i],level+1);
	}
}
int main()
{
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x==-1)
		v[0].push_back(i);
		else
		v[x].push_back(i);
	}
	
	for(int i=0;i<v[0].size();i++)
	{
		dfs(v[0][i],1);
	}
	cout<<mx;
}


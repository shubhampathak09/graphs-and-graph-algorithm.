#include<bits/stdc++.h>
using namespace std;

void bfs(int src,int dst,vector<vector<int>>g)
{
	vector<int>prev(100000,-1);
	bool flag[100000];
	stack<int>s;
	queue<int>q;
	q.push(src);
	while(!q.empty())
	{
		int u=q.front();
		flag[u]=1;
		q.pop();
		for(auto x:g[u])
		{
			if(flag[x]==0)
			{
			flag[x]=1;
			prev[x]=u;
			q.push(x);
		}
		}
	}
	int i=dst;
	s.push(i);
	while(i!=src)
	{
		s.push(prev[i]);
		i=prev[i];
	}
	while(!s.empty())
	{
		char s1=s.top()+64;
		s.pop();
		cout<<s1;
	}
 } 

int main()
{
	//stack<int>s;
	
	int m,n;
	cin>>m>>n;
	vector<vector<int>>g(100000);
	for(int i=0;i<m;i++)
	{
		char a[30],b[30];
		cin>>a>>b;
	//	g[a[0]-64].push_back(b[0]-64);
	//	g[b[0]-64].push_back(a[0]-64);
	}
	
	while(n--)
	{
		char s[30],d[30];
		cin>>s>>d;
	    bfs(s[0]-64,d[0]-64,g);	
	}
	
	
}

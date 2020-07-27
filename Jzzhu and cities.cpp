/*

Make Codeforces not Coronaforces
In English ??-??????
Enter | Register

    
HOMETOPCONTESTSGYMPROBLEMSETGROUPSRATINGEDUAPICALENDARHELP10 YEARS! 

Please, try EDU on Codeforces! New educational section with videos, subtitles, texts, and problems.×
  
Codeforces Round #257 (Div. 1)
Finished
  
? Virtual participation
Virtual contest is a way to take part in past contest, as close as possible to participation on time. It is supported only ICPC mode for virtual contests. If you've seen these problems, a virtual contest is not for you - solve these problems in the archive. If you just want to solve some problem from a contest, a virtual contest is not for you - solve this problem in the archive. Never use someone else's code, read the tutorials or communicate with other person during a virtual contest.
  
? Problem tags
    graphs    greedy    shortest paths    *2000
No tag edit access
  
? Contest materials
Announcement
Tutorial (en)
PROBLEMSSUBMITSTATUSSTANDINGSCUSTOM TEST
B. Jzzhu and Cities
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output

Jzzhu is the president of country A. There are n cities numbered from 
1 to n in his country. 
City 1 is the capital of A. 
Also there are m roads connecting the cities. 
One can go from city u i to v i (and vise versa) using the i-th road,
 the length of this road is x i. Finally, there are k train routes in the country. 
 One can use the i-th train route to go from capital of the country to city s i (and vise versa), the length of this route is y i.
 

Jzzhu doesn't want to waste the money of the country,
 so he is going to close some of the train routes.
  Please tell Jzzhu the maximum number of the train routes which can
   be closed under the following condition: the length of the shortest path 
   from every city to the capital mustn't change.
*/
#include<bits/stdc++.h>
using namespace std;

#define INF 1e9 +7

int n,m,k,x,y,w;
int ans=0;
void solve()
{
	
	cin>>n>>m>>k;
	vector<vector<pair<int,int>>>adj(n+1);
	vector<int>train(n+1,INF);
	vector<bool>visited(n+1,false);
	vector<int>dist(n+1,INF);
	vector<int>last(n+1,0);
	for(int i=0;i<m;i++)
	{
		 
		cin>>x>>y>>w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
	for(int i=0;i<k;i++)
	{
		cin>>x>>w;
		
		if(train[x]!=INF)
		ans++;
		train[x]=min(train[x],w); 
	}
	
	dist[1]=0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	pq.push({0,1});
	
	for(int i=1;i<=n;i++)
	{
		
		if(train[i]!=INF)
		{
		
		last[i]=1;
		dist[i]=train[i];
		pq.push({dist[i],i});
	}
	}
	while(!pq.empty())
	{
		
		int u=pq.top().second;
		pq.pop();
		if(!visited[u])
		{
			visited[u]=true;
			 for(auto x:adj[u])
			 {
			 	int dm=dist[u]+x.second;
			 	if(dm<dist[x.first])
			 	{
			 		dist[x.first]=dm;
			 		last[x.first]=0;
			 		pq.push({dist[x.first],x.first});
				 }
			 }
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans+=(last[i]==0&&train[i]!=INF);
	}
	
	cout<<ans;
}
   
 int main()
 {
 	solve();
   }  

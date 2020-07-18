
#include<bits/stdc++.h>
using namespace std;

#define oo 100000007
int main(){
int v,e;
cin>>v>>e;
vector<vector<pair<int,int>>>g(v+1);

for(int i=0;i<e;i++)
{
int a,b,c;
cin>>a>>b>>c;
g[a].push_back({b,c});
g[b].push_back({a,c});
}

int dist[v+1];
memset(dist,oo,sizeof(dist));
int source=1;
dist[source]=0;
int prev[v+1];
memset(prev,-1,sizeof(source));
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
pq.push({source,dist[source]});

while(!pq.empty())
{
int u=pq.top().first;
for(auto x: g[u])
{
int dig=dist[u]+x.second;
if(dig<dist[x.first])
{
dist[x.first]=dig;
prev[x.first]=u;
pq.push({x.first,dist[x.first]});
}
}
}
if(prev[v]==-1||dist[v]==oo)
cout<<"-1";
else
{
stack<int>s;
int i=v;
s.push(v);
while(i!=source)
{
s.push(prev[i]);
i=prev[i];
}
while(!s.empty())
{
cout<<s.top();
s.pop();
}
}
}



#include<bits/stdc++.h>

using  namespace std;


void addedge(int u,int v,vector<int>*adj)
{
    adj[u].push_back(v);
}


void dfsutil(int src,bool *visited,vector<int>*adj)
{
    //if(!visited[src])
    visited[src]=true;
    cout<<src<<"\t";

    vector<int>::iterator i;

    for(i=adj[src].begin();i!=adj[src].end();i++)
    {
        if(visited[*i]==false)
        dfsutil(*i,visited,adj);
    }
}

void dfs(int n,vector<int>*adj)
{
    bool visited[n];
    for(int i=0;i<n;i++)
    visited[i]=false;

    for(int i=0;i<n;i++)
    if(visited[i]==false)       // how come
    dfsutil(i,visited,adj);

}

int main()
{
int n=8;
vector<int>adj[8];
// adding the edges

addedge(0,1,adj);
addedge(1,2,adj);
addedge(2,3,adj);
addedge(3,1,adj);
addedge(4,5,adj);
addedge(5,6,adj);
addedge(5,7,adj);

dfs(n,adj);



}

 
// bfs

#include<bits/stdc++.h>

using namespace std;


void addedge(int u,int v,vector<int>*adj)

{

adj[u].push_back(v);

}

void bfsutil(int src,bool *visited,vector<int>*adj)
{

visited[src]=true;

queue<int>q;

vector<int>::iterator i;

q.push(src);





while(!q.empty())
{

    int u=q.front();
    cout<<u<<"\t";
    q.pop();
    for(i=adj[u].begin();i!=adj[u].end();++i)
    {
        if(visited[*i]==false)
        {
            visited[*i]=true;
            
            
            q.push(*i);

        }
    }
}

}


void bfs(int n,vector<int>*adj)
{
bool visited[n];


for(int i=0;i<n;i++)
visited[i]=false;

for(int i=0;i<n;i++)
if(visited[i]==false)
bfsutil(i,visited,adj);

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

bfs(n,adj);

}
#include<bits/stdc++.h>

using namespace std;

struct cell
{
	int x;
	int y;
	int dist;
	cell(){
	}
	
	cell(int x,int y,int dist):x(x),y(y),dist(dist) {
		
	}
};

bool issafe(int x,int y,int N)
{
	if(x>=1&&x<=N&&y>=1&&y<=N)
	return true;
	else
	return false;
}

int minStepKnight(int startpos[],int targetpos[],int N)
{
	cell t;
	int x;
	int y;
	bool visited[N+1][N+1];
	
	queue<cell>q;
	
	q.push(cell(startpos[0],startpos[1],0));
	
	for(int i=1;i<=N;i++)
	for(int j=1;j<=N;j++)
	visited[i][j]=false;
	
	visited[startpos[0]][startpos[1]]=true;
	int dx[]={2,1,-1,-2,-2,-1,1,2};
	int dy[]={1,2,2,1,-1,-2,-2,-1};
	//int dy[]={};
	while(!q.empty())
	{
		
		t=q.front();
		q.pop();
		
		if(t.x==targetpos[0]&&t.y==targetpos[1])
		return t.dist;
		
		for(int i=0;i<8;i++)
		{
			x=t.x+dx[i];
			y=t.y+dy[i];
			if(issafe(x,y,N)&&visited[x][y]==false)
			{
				visited[x][y]=true;
				q.push(cell(x,y,t.dist+1));
			}
		}
		
	}
	
}


int main()
{
	int N=30;
	int startpos[]={1,1};
	int targetpos[]={30,30};
	
	cout<<minStepKnight(startpos,targetpos,N);
}

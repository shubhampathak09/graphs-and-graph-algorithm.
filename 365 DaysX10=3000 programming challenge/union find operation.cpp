/* To do
50 USACO
50 codejam+hashcode+kickstart
500 atcoder
400 cp-algorithms + geek for geeks
1000 Leetcode + codechef
1000 codeforcces

Total 3000

30 May 2020 :start date
30 May 2021: End

/ End of day wise progress

// begin

1. Union and find operation only for sets

*/


#include<bits/stdc++.h>

using namespace std;


int findit(int parent[],int i)
{
	
	if(parent[i]==-1)
	return i;
	
	return findit(parent,parent[i]);
	
}


void unionit(int x,int y,int *parent)
{
	
	int xpar=findit(parent,x);
	int ypar=findit(parent,y);
	
	if(xpar!=ypar)
	{
		parent[xpar]=ypar;
	}
	
}

int main()
{
	int v=5;
	int parent[5]={-1,-1,-1,-1,-1};
	
	unionit(0,1,parent);  //parent 1
	unionit(1,2,parent);
	unionit(3,4,parent);
	
	cout<<findit(parent,0)<<endl;
	cout<<findit(parent,4)<<endl;;
	cout<<findit(parent,3)<<endl;
	cout<<findit(parent,1)<<endl;
	cout<<findit(parent,2);
}


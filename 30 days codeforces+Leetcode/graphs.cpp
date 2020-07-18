#include<bits/stdc++.h>

using namespace std;

void addedge(int u,int v,vector<int>*adj)
{
	
	adj[u].push_back(v);
	
}


bool checkalltrust(vector<int>adj,int V,int i )
	{
		
		vector<int>::iterator it;
		for(int k=1;k<=V;k++)
		{
			if(k!=i)
		for(it=adj[k].begin();it!=adj[k].end();it++)
		if(*it==i)
		return true;
		}
		return false;
	}



int main()
{
	/*
	case 1
	int V=5;
	vector<int>adj[6];
	addedge(1,2,adj);
	addedge(3,1,adj);
	addedge(3,2,adj);
	addedge(1,5,adj);
	addedge(4,3,adj);
	addedge(4,2,adj);
	addedge(5,2,adj);
	addedge(4,5,adj);
	
	*/
	

	
	
	
	
/*	test case 2:
	int V=3;
	
	vector<int>adj[4];
	
	addedge(1,3,adj);
	addedge(2,3,adj);
	addedge(3,1,adj);
	
	
*/


	
	
	int V=5;
	vector<int>adj[6];
	addedge(2,1,adj);
	addedge(1,5,adj);
	addedge(4,5,adj);
	addedge(3,5,adj);
	for(int i=1;i<=V;i++)
	
		
	
	vector<int>::iterator ite;
	 
	int judge=-1;
	for(int i=1;i<=V;i++)
	{
	
	if(adj[i].size()==0)
	{
		 
	   judge=i;
		}	
	 
	}
	 cout<<judge;
	//cout<<adj[2].size();
}

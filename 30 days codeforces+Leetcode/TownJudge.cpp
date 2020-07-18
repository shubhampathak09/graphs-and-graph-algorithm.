#include<bits/stdc++.h>

using namespace std;


int main()
{
	
	
	vector<vector<int>>trust={{1,3},{1,4},{2,3},{2,4},{4,3}};
	int N=4;
	vector<int> indegree(1001,0);
	vector<int> outdegree(1001,0);
	
//	cout<<trust[0][0];
	for(int i=0;i<trust.size();i++)
	{
		
		outdegree[trust[i][0]]++;
		indegree[trust[i][1]]++;
		
	}
	
	
 for(int i=1;i<=N;i++)
	if(indegree[i]==N-1&&outdegree[i]==0)
	cout<<i;
	
	
	//cout<<outdegree[1]<<"\t"<<indegree[3];
	
}

// to find number of vertices in hypercube graph given its order

// order is the maximumn numbers of edges connected to node

#include<bits/stdc++.h>
using namespace std;



int getvertices(int k)
{
	
	if(k==0)
	return 1;
	else
	return 2*getvertices(k-1);
	
}

int main()
{
	
	cout<<getvertices(10);
	
	
}



// unorderd map

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	unordered_map<string,int>umap;
	
	umap["nova"]=1;
	umap["steve"]=2;
	umap["norman"]=3;
	
	for(auto x:umap)
	{
		cout<<x.first<<"\t";;
		cout<<x.second<<endl;
	}
	
}

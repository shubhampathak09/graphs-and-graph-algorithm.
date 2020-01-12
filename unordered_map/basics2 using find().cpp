// applications of unordered map

#include<bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<string,double>umap;
	
	umap["PI"]=3.14;
	umap["ROOT1"]=1;
	umap["ROOT2"]=2.14;
	umap["ROOT3"]=1.73;
	
	string key="e";
	int val=2.178;
	umap.insert(make_pair("e",2.718));
	
	if(umap.find(key)==umap.end())
	cout<<"value does not exist";
	else
	cout<<"value exist";
	
	cout<<endl;
	unordered_map<string,double>::iterator i;
	
	for(i=umap.begin();i!=umap.end();i++)
	{
		cout<<i->first;
		cout<<i->second;
		cout<<endl;
	}
}

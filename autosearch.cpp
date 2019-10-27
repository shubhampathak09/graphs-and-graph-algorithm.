//not workingh
// someproblem in autokeywords generation
//dunnno what ????????????????????????????????????????????????????????????????????????????????????????


#include<bits/stdc++.h>

using namespace std;

const int alphabet_size=26;

struct trienode
{
	struct trienode* children[alphabet_size];
	bool isend;
};

struct trienode*getnode()
{
	struct trienode*pnode=new trienode();
	for(int i=0;i<alphabet_size;i++)
	pnode->children[i]=NULL;
	
	return pnode;
}


void insert(struct trienode*root,string key)
{
	struct trienode*pcrawl=root;
	
	for(int i=0;i<key.length();i++)
	{
		int index=key[i]-'a';
		if(!pcrawl->children[i])
		pcrawl->children[i]=getnode();
		pcrawl=pcrawl->children[i];
	}
	pcrawl->isend=true;
	
}

bool search(struct trienode*root,string key)
{
	
	struct trienode*pcrawl=root;
	
	for(int i=0;i<key.length();i++)
	{
		int index=key[i]-'a';
		
		if(!pcrawl->children[i])
		return false;
		pcrawl=pcrawl->children[i];
		
	}
	return (pcrawl&&pcrawl->isend);
	
	
}

bool islastnode(struct trienode*root)
{
	for(int i=0;i<alphabet_size;i++)
	{
		if(root->children[i])
		return 0;
	}
	return 1;
}

void suggestions(struct trienode*root,string prefix)
{
	
	if(root->isend)
	{
		cout<<prefix;
		return;
	}
	
	
	if(islastnode(root))
	return;
	
	
	for(int i=0;i<alphabet_size;i++)
	{
		if(root->children[i])
		{
			prefix.push_back(97+i);
			suggestions(root->children[i],prefix);
		}
	}
	
}


int printsuggestions(struct trienode*root,string query)
{
	
	struct trienode*pcrawl=root;
	
    for(int i=0;i<query.length();i++)
    {
    	
    	int index=query[i]-'a';
    	
    	if(!pcrawl->children[i])
    	return 0;
    	
    	pcrawl=pcrawl->children[i];
	}
	bool isword=pcrawl->isend==true;
	
	bool islast=islastnode(pcrawl)==true;
	
	if(isword&&islast)
	{
		cout<<query;
		return -1;
	}
	if(!islast)
	{
		string prefix=query;
		suggestions(pcrawl,prefix);
		return 1;
	}
	
}


int main()
{
	struct trienode*root=getnode();
	
	insert(root,"teenagewolf");
	insert(root,"teen");
	insert(root,"age");
	
//	cout<<search(root,"teenage");
//	cout<<search(root,"teen");
	
	printsuggestions(root,"t");
	
}


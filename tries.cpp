#include<bits/stdc++.h>
 
using namespace std;

const int alpha_size=26;

struct trie
{
	struct trie*children[alpha_size];
	
	bool isend;
};

struct trie* getnode()
{
	struct trie*pnode=new trie;
	pnode->isend=false;
	
	for(int i=0;i<alpha_size;i++)
	pnode->children[i]=NULL;
	
	return pnode;
	
}


void insert(struct trie*root,string key)
{
	
	struct trie*pcrawl=root;
	
	for(int i=0;i<key.length();i++)
	{
		int index=key[i]-'a';
		
		if(!pcrawl->children[index])
		pcrawl->children[index]=getnode();
		pcrawl=pcrawl->children[index];
	}
	pcrawl->isend=true;
	
}


bool search(struct trie*root,string key)
{
	
	struct trie*pcrawl=root;
	for(int i=0;i<key.length();i++)
	{
		int index=key[i]-'a';
		if(!pcrawl->children[index])
		return false;
		pcrawl=pcrawl->children[index];
	}
	return (pcrawl&&pcrawl->isend==true);
}
int main()
{
	string keys[] = {"the", "a", "there", 
                    "answer", "any", "by", 
                     "bye", "their" }; 
    int n = sizeof(keys)/sizeof(keys[0]); 
  
    struct  trie *root = getnode(); 
  
    // Construct trie 
    for (int i = 0; i < n; i++) 
        insert(root, keys[i]); 
        
        search(root,"theif") ? cout<<"Yes":cout<<"no";
        
        insert(root,"theif");
        
        cout<<"\n";
        
        search(root,"theif") ?cout<<"yes":cout<<"no";
        
	
}

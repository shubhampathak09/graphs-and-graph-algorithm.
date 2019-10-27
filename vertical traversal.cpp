#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
};

struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	
	node->data=data;
	node->left=NULL;
	node->right=NULL;
};

void buildmap(struct node*root,int hd,map<int,vector<int>>&m)
{
	if(root==NULL)
	return;
	
	m[hd].push_back(root->data);
	
	buildmap(root->left,hd-1,m);
	
	buildmap(root->right,hd+1,m);
	
}

void printverticalorder(struct node*root)
{
	
	int hd=0;
	map<int,vector<int>>m;
	
	buildmap(root,hd,m);
	
	map<int,vector<int>>::iterator it;
	
	for(it=m.begin();it!=m.end();it++)
	{
		
		for(int i=0;i<it->second.size();i++)
		cout<<it->second[i]<<" ";
		cout<<endl;
	}
	
}

int main()
{
	
	struct node*root=createnode(1);
	
	root->left=createnode(2);
	
	root->right=createnode(3);
	
	root->left->left=createnode(4);
	
	root->left->right=createnode(5);
	
	root->right->left=createnode(6);
	
	root->right->right=createnode(7);
	
	root->right->left->right = createnode(8); 
    root->right->right->right = createnode(9); 
    
    printverticalorder(root);
	
}

// gg
// gg
// gg


#include<bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node*left;
	struct node*right;
};


struct node*newnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
		
}

void printknode(struct node*root,int k)
{
	
	if(root=NULL)
	return;
	if(k==0)
	cout<<root->data;
	else
	printknode(root->left,k-1);
	printknode(root->right,k-1);
	
}

int printknode(struct node*root,struct node*targetnode,int k)
{
	
	if(root==NULL)
	return -1;
	
	if(root==targetnode)
	{
		printknode(root,k);
		return 0;
	}
	int d1=printknode(root->left,targetnode,k);
	if(d1!=-1)
	{
		
		if(d1+1==k)
		cout<<root->data;
		else
		printknode(root->right,k-d1-2);
		
		return 1+d1;
	}
	int d2=printknode(root->right,targetnode,k);
	if(d2!=1)
	{
		if(d2+1==k)
		cout<<root->data;
		else
		printknode(root->left,k-d2-2);
		return 1+d2;
	}
	return -1;
	
}


int main()
{
	 node * root = newnode(20); 
    root->left = newnode(8); 
    root->right = newnode(22); 
    root->left->left = newnode(4); 
    root->left->right = newnode(12); 
    root->left->right->left = newnode(10); 
    root->left->right->right = newnode(14); 
    node * target = root->left->right; 
	 printknode(root,target,2);
}

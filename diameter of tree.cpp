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
	
}


void inorder(struct node*node)
{
	if(node!=NULL)
	{
		inorder(node->left);
		cout<<node->data;
		inorder(node->right);
	}
}


int height(struct node*node)
{
	if(node==NULL)
	return 0;
	
	int lh=height(node->left);
	int rh=height(node->right);
	
	if(lh>rh)
	return 1+lh;
	else
	return 1+rh;	
}

int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}

int diameter(struct node*node)
{
	if(node==NULL)
	return 0;
	
	int lh=height(node->left);
	int rh=height(node->right);
	int ldiam=diameter(node->left);
	int rdiam=diameter(node->right);
	
	return max(lh + rh + 1, max(ldiam, rdiam)); 
	
}


int main()
{
	struct node*root=createnode(1);
	
	root->left=createnode(2);
	
	root->right=createnode(3);
	
	inorder(root);
	
	cout<<diameter(root);
}

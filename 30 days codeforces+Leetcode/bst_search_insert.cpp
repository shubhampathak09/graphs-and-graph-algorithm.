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
	return node;
}

void inorder(struct node*root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<"\t";
	inorder(root->right);
	 
}

struct node*insert(struct node*node,int key)
{
	
	if(node==NULL)
	return createnode(key);
	
	if(node->data>key)
	node->left=insert(node->left,key);
	else if(node->data<key)
	node->right=insert(node->right,key);
	
	return node;
	
}

struct node*search(struct node*node,int key)
{
	
	if(node==NULL||node->data==key)
	return node;
	
	if(node->data<key)
	return search(node->right,key);
	
	return search(node->left,key);
	
}


int main()
{
	/*
	struct node*root=NULL;
	root=insert(root,10);
	insert(root,16);
	insert(root,12);
	insert(root,9);
	insert(root,5);
	insert(root,23);
	
	inorder(root);
	*/
	/*
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	inorder(root);
	*/
		struct node*root=NULL;
	root=insert(root,10);
	insert(root,16);
	insert(root,12);
	insert(root,9);
	insert(root,5);
	insert(root,23);
	
	inorder(root);
	
}

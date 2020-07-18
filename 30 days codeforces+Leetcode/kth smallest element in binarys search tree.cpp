#include<bits/stdc++.h>

using namespace std;


struct node{
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


void inorder(struct node*node)
{
	if(node==NULL)
	return;
	
	inorder(node->left);
	cout<<node->data<<"\t";
	inorder(node->right);
}

struct node*kthelement(struct node*root,int &count,int k){
	if(root==NULL)
	return NULL;
	
	struct node*left=kthelement(root->left,count,k);
	if(left!=NULL)
	return left;
	
	count++;
	if(count==k)
	return root;
	
	return kthelement(root->right,count,k);
}

void printkthelement(struct node*root,int k)
{
	
	int count=0;
	struct node*res=kthelement(root,count,k);
	if(res!=NULL)
	cout<<res->data;
	else
	cout<<"does not exist";
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

int main()
{
	/*
	struct node*root=NULL;
	insert(root,10);
	insert(root,13);
	insert(root,6);
	insert(root,8);
	insert(root,20);
	
	inorder(root);
	*/
	/*
	struct node*node=createnode(1);
	node->left=createnode(2);
	node->right=createnode(3);
	*
	inorder(node);
	*/
	
	struct node*root=NULL;
	root=insert(root,10);
	insert(root,13);
	insert(root,6);
	insert(root,8);
	insert(root,20);
	insert(root,23);
	
	inorder(root);
	
	cout<<endl;
	
	printkthelement(root,3);
}

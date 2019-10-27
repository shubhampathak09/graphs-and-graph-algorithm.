// mirror tree

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
	
	node->left=NULL;
	
	node->right=NULL;
}

void inorder(struct node*node)
{
	if(node==NULL)
	return;
	
	inorder(node->left);
	
	cout<<node->data;
	
	inorder(node->right);
}


void mirror(struct node*root)
{
	
	if(root==NULL)
	return;
	
	
	mirror(root->left);
	mirror(root->right);
	
	struct node*temp;
	temp=root->left;
	root->left=root->right;
	root->right=temp;
}


int main()
{
	
	struct node*root1=createnode(1);
	
	root1->left=createnode(2);
	
	root1->right=createnode(3);
	
	mirror(root1);
	
	inorder(root1);
}

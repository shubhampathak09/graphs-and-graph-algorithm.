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
		node->data=data;
}

void printKdisroot(struct node*root,int k)
{
	if(root==NULL)
	return;
	
	if(k==0)
	cout<<root->data;
	
	else
	{
		printKdisroot(root->left,k-1);
		printKdisroot(root->right,k-1);
	}
}

int main()
{
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	root->left->left=createnode(4);
	root->left->right=createnode(5);
	root->right->right=createnode(8);
	
	printKdisroot(root,2);
	
}

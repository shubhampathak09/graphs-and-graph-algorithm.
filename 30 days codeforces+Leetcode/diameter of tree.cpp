#include<bits/stdc++.h>

using namespace std;


struct node
{
	int data;
	struct node*left;
	struct node*right;
	
};

int max(int a,int b)
{
	return a > b ? a : b;
}

struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}


int height(struct node*node)
{
	if(node==NULL)
	return 0;
	
	int lheight=height(node->left);
	int rheight=height(node->right);
	
	return lheight>rheight ? 1+lheight :1+rheight;
}

int diameter(struct node*node)
{
	
	if(node==NULL)
	return 0;
	
	int ldiam=diameter(node->left);
	int rdiam=diameter(node->right);
	
	return max(ldiam+rdiam+1,max(ldiam,rdiam));
	
}



struct node*newNode(int data)
{
	
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->left=NULL;
	node->right=NULL;
	return  node;
}

int main()
{
 struct node *root = newNode(1); 
  root->left        = newNode(2); 
  root->right       = newNode(3); 
  root->left->left  = newNode(4); 
  root->left->right = newNode(5); 	
	
	cout<<height(root);
}

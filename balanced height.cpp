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

int absolute(int n)
{
	if(n<0)
	return -1*n;
	else
	return n;
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

int balancedheight(struct node*node)
{
	
	if(node==NULL)
	return 0;
	
	int rh=height(node->left);
	int lh=height(node->right);
	
	return absolute(lh-rh);
}

 

int main()
{
	
	 Node * root = newNode(10); 
    root->left = newNode(5); 
    root->right = newNode(100); 
    root->right->left = newNode(50); 
    root->right->right = newNode(150); 
    root->right->left->left = newNode(40); 
	
	cout<<balancedheight(node);
	
	
}

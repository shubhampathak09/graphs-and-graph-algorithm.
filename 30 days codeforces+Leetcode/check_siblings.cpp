// check siblings

#include<bits/stdc++.h>

using namespace std;

struct node{
	
	int data;
	struct node*left;
	struct node*right;
};

struct node*newNode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}


bool issibling(struct node*root,int data1,int data2)
{
	
	if(root==NULL)
	return false;
	
	return (root->left->data==data1&&root->right->data==data2||root->left->data==data2&&root->right->data==data1||issibling(root->left,data1,data2)||issibling(root->right,data1,data2));
	
}



int main()

{

struct node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->right->left = newNode(5); 
    root->right->right = newNode(6); 
    root->left->left->right = newNode(7); 
	
	cout<<issibling(root,5,6);
	
}



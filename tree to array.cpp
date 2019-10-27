// tree to array

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
int res=0;
 
int countnode(struct node*root)
{
	  if(root==NULL)
	  return 0;
	  
	  if(root->left && root->right)
	  res++;
	  
	  return countnode(root->left)+countnode(root->right)+res;
}


int main()
{
	struct node*node=createnode(1);
	
	node->left=createnode(2);
	
	node->right=createnode(5);
	
	node->left->left=createnode(3);
	
	 
	 // incorrect
	 
	
 
	
	node->right->right=createnode(7);
	
	cout<<countnode(node);
	 
}

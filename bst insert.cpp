#include<bits/stdc++.h>
using namespace std;

struct  node
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
	if(node==NULL)
	return;
	inorder(node->left);
	printf("%d",node->data);
	inorder(node->right);
	
}

struct node*insertnode(struct node*node,int key)
{
	if(node==NULL)
	return createnode(key);
	
	if(key<node->data)
	node->left=insertnode(node->left,key);
	if(key>node->data)
	node->right=insertnode(node->right,key);
	return node;
	
}

struct node*minvalue(struct node*node)
{
	struct node*current=node;
	
	while(current&&current->left!=NULL)
	{
		current=current->left;
	}
	return current;
}

struct node*deletenode(struct node*node,int key)
{
	if(node==NULL)
	return node;
	
	if(key<node->data)
	node->left=deletenode(node->left,key);
	
	else if(key>node->data)
	node->right=deletenode(node->right,key);
	
	else
	{
		if(node->left==NULL)
		{
			struct node*temp=node->right;
			free(node);
			return temp;
		}
		else if(node->right==NULL)
		{
			struct node*temp=node->left;
			free(node);
			return temp;
		}
		struct node*temp=minvalue(node->right);
		node->data=temp->data;
		node->right=deletenode(node->right,temp->data);
		
	}
	return node;
	
}

int main()
{
	struct node*root=NULL;
	
	root=insertnode(root,20);
	
	root=insertnode(root,10);
	
	root=insertnode(root,30);
	
	
	inorder(root);
	
	printf("\n");
	root=deletenode(root,30);
	
	inorder(root);
}





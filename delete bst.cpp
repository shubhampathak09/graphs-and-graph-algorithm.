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

struct node*minvalnode(struct node*node)
{
	struct node*current=node;
	
	while(current && current->left!=NULL)
	{
		
		current=current->left;
	}
	return current;
}

struct node*insert(struct node*node,int key)
{
	
	if(node==NULL)
	return createnode(key);
	
	if(node->data>key)
	node->left=insert(node->left,key);
	
	else
	node->right=insert(node->right,key);
	
	return node;
}


struct node*deletenode(struct node*root,int key)
{
	if(root==NULL)
	return root;
	
	if(key<root->data)
	root->left=deletenode(root->left,key);
	else if(key>root->data)
	root->right=deletenode(root->right,key);
	
	else
	{
		if(root->left==NULL)
		{
			struct node*temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct node*temp=root->left;
			free(root);
			return temp;
		}
		
		// node with 2 child
		struct node*temp=minvalnode(root->right);
		root->data=temp->data;
		
		// delete inorder sucessor
		root->right=deletenode(root->right,temp->data);
	}
	return root;
}

void inorder(struct node*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		
		cout<<root->data;
		
		inorder(root->right);
	}
}

int main()
{
	struct node*root=createnode(6);
	
	root->left=createnode(4);
	
	root->right=createnode(8);
	
	inorder(root);
	
	
	deletenode(root,6);
	
	cout<<endl;
	
	inorder(root);
	
	
	//fdfcjsdh
}

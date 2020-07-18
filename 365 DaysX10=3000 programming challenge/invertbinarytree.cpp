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
};

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
	else
	{
		struct node*temp;
		mirror(root->left);
		mirror(root->right);
		temp=root->left;
		root->left=root->right;
		root->right=temp;
	}
//	return root;
	
}

struct node*inverttree(struct node*node)
{
	//if(node==NULL)
	//return NULL;
	mirror(node);
	return node;
	
}

int main()
{
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	inorder(root);
	cout<<endl;
	inorder(inverttree(root));
	
	}

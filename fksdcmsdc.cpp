#include<bits/stdc++.h>
using namespace std;

struct node
{
	
	int data;
	struct node*left;
	struct node*right;
};

void inorder(struct node*node)
{
	if(node!=NULL)
	{
		inorder(node->left);
		
		printf("%d",node->data);
		
		inorder(node->right);
		
	}
	
}

struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
}

struct node*insertnode(struct node*node,int data)
{
if(node==NULL)
createnode(data);
if(node->data<data)
node->right=insertnode(node->right,data);
else
node->left=insertnode(node->left,data);

return node;	
	
}


int main()
{
	struct node*root=NULL;
	
	root=insertnode(root,20);
	
	root=insertnode(root,30);
	
	root=insertnode(root,10);
	
	inorder(root);
	
	
	
	
}

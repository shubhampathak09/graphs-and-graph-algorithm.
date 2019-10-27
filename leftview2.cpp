
//.. why answer sporadic

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

void leftviewutil(struct node*node,int level,int *max_level)
{
	if(node==NULL)
	return;
	
	if(*max_level<level)
	{
	
	cout<<node->data<<"\t";
	*max_level=level;
}

	leftviewutil(node->left,level+1,max_level);
	leftviewutil(node->right,level+1,max_level);
	
}

void leftview(struct node*node)
{
	int max_level=0;
	
	leftviewutil(node,1,&max_level);
	
}

int main()
{
	
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	root->right->right=createnode(5);
	
	leftview(root);
	
}

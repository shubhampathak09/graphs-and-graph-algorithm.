// right view

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

void rightviewutil(struct  node*node,int level,int *max_level)
{
	
	if(node==NULL)
	return;
	
	if(*max_level<level)
	{
		cout<<node->data;
		*max_level=level;
	}
	rightviewutil(node->right,level+1,max_level);
	rightviewutil(node->left,level+1,max_level);
}

void rightview(struct node*node)
{
	
	int max_level=0;
	rightviewutil(node,1,&max_level);
	
}

int main()
{
	
	
	struct node*node=createnode(1);
	node->left=createnode(2);
	node->right=createnode(3);
	node->right->right=createnode(5);
	
	rightview(node);
}

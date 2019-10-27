// incoorect


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

int height(struct node*node)
{
	if(node==NULL)
	return 0;
	int lheight=height(node->left);
	int rheight=height(node->right);
	if(lheight>rheight)
	return 1+lheight;
	else return 1+rheight;
}

void printatlevel(struct node*node,int level)
{
	if(node==NULL)
	return;
	
	if(level==1)
	cout<<node->data;
	if(node->left!=NULL)
	printatlevel(node->left,level-1);
	else if(node->right!=NULL)
	printatlevel(node->right,level-1);
}

void printlevelorder(struct node*node)
{
	
	int h=height(node);
	
	for(int i=1;i<=h;i++)
	{
		printatlevel(node,i);
		cout<<"\n";
	}
}
int main()
{
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	
	root->right->left=createnode(5);
	
	printlevelorder(root);
	
}

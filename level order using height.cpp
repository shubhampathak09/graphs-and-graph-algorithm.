// level order using height trees

#include<bits/stdc++.h>

using namespace std;


struct node
{
	
	int data;
	struct node*left;
	struct node*right;
};


int height(struct node*node)
{
	
	
	if(node==NULL)
	return 0;
	
	else
	{
		int lheight=height(node->left);
		int rheight=height(node->right);
		
		return lheight>rheight ? lheight+1 : rheight+1;
		
	}
	
}


void printatlevel(struct node*node,int level)
{
	
	if(node==NULL)
	return;
	
	if(level==1)
	cout<<node->data<<" ";
	
	else
	{
		printatlevel(node->left,level-1);
		printatlevel(node->right,level-1);
	}
	
}


struct node*createnode(int data)
{
	
	struct node*node=(struct node*)malloc(sizeof(struct node));
	
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;
}

void printlevelorder(struct node*node)
{
	
	int h=height(node);
	
	
	for(int i=1;i<=h;i++)
	printatlevel(node,i);
	
}

int main()
{
	
	
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	root->left->left=createnode(4);
	
	printlevelorder(root);
	
}

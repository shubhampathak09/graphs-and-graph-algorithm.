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

int height(struct node*root)
{
	if(root==NULL)
	return 0;
	int lheight=height(root->left);
	int rheight=height(root->right);
//	return 1+lheight?lheight>rheight:1+rheight;

    if(lheight>rheight)
    return 1+lheight;
    else
    return 1+rheight;
}


void printlefttoright(struct node*node,int level)
{
	if(level==1)
	cout<<node->data<<"\t";
	else
	{
		printlefttoright(node->left,level-1);
		printlefttoright(node->right,level-1);
	}
	
}

void printrighttoleft(struct node*node,int level)
{
	if(level==1)
	cout<<node->data<<"\t";
	else
	{
		printrighttoleft(node->right,level-1);
		printrighttoleft(node->left,level-1);
	}
	
}


void clockwisespiraltraversal(struct node*node)
{
	int i=1;
	int j=height(node);
	int flag=0;
	while(i<=j)
	{
		if(flag==0)
		{
			printlefttoright(node,i);
			cout<<"\n";
			i++;
			flag=1;
		}
		else if(flag==1)
		{
			printrighttoleft(node,j);
			cout<<"\n";
			j--;
			flag=0;
		}
		
	}
	
}


int main()
{
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	root->left->left=createnode(4);
	root->left->right=createnode(5);
	root->right->left=createnode(6);
	root->right->right=createnode(7);
//	cout<<height(root);

clockwisespiraltraversal(root);
}

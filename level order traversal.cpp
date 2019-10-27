#include<bits/stdc++.h>

using namespace std;

//level order traversal


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
	return  node;
}
void printatgivenlevel(struct node*root,int level)
{
	if(root==NULL)
	return;
	
	if(level==1)
	cout<<root->data<<"\t";
	
	else
	{
		printatgivenlevel(root->left,level-1);
		printatgivenlevel(root->right,level-1);
	}
}

int height(struct node*root)
{
	if(root==NULL)
	return 0;
	int lheight=height(root->left);
	int rheight=height(root->right);
	if(lheight>rheight)
	return 1+lheight;
	else
	return 1+rheight;
}

void printlevelorder(struct node*root)
{
	
	int h=height(root);
	
	for(int i=1;i<=h;i++)
	{
	
	printatgivenlevel(root,i);
	cout<<"\n";
}
	
}

int main()
{
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	
	printlevelorder(root);
}

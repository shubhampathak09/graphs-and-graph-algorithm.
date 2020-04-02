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



void printpath(int path[],int pathlen)
{
	
	for(int i=0;i<pathlen;i++)
	cout<<path[i];
}

void printpathsRecur(struct node*root,int path[],int pathlen)
{
	if(root==NULL)
	return;
	
	
	path[pathlen]=root->data;
	pathlen++;
	
	if(root->left==NULL&&root->right==NULL)
	{
	
	printpath(path,pathlen);
	cout<<"\n";
}
	else
	{
		printpathsRecur(root->left,path,pathlen);
		printpathsRecur(root->right,path,pathlen);
	}
	
	
}


void printallpath(struct node*root)
{
	
	int path[100];
	printpathsRecur(root,path,0);
	
}



int main()
{
	
	
	struct node*root=createnode(1);
	
	root->left=createnode(2);
	
	root->right=createnode(3);
	
	root->right->left=createnode(4);
	
	root->right->right=createnode(5);
	
	
	printallpath(root);
	
	
}


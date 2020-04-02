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
	
	struct node*root=(struct node*)malloc(sizeof(struct node));
	
	root->data=data;
	root->left=NULL;
	root->right=NULL;
	
	return root;
}


struct node * converttobst(int a[],int l,int r)
{

    if(l>r)
    return NULL;

	int m=l + (r-l)/2;
	
    struct node*root=createnode(a[m]);
    
    root->left=converttobst(a,l,m-1);
    
    root->right=converttobst(a,m+1,r);
    
    return root;
	
	
}


void printroot(int path[],int pathlen)
{
	
	for(int i=0;i<pathlen;i++)
	cout<<path[i];
	
}


//
//void inorder(struct node*root)
//{
//	
//	if(root==NULL)
//	return;
//	
//	inorder(root->left);
//	cout<<root->data;
//	inorder(root->right);
//	
//}


void printroottoleafpath(struct node*root,int path[],int pathlen)
{
	if(root==NULL)
	return;
	
	path[pathlen]=root->data;
	
	pathlen++;
	
	if(root->left==NULL&&root->right==NULL)
	{
	
	printroot(path,pathlen);
	cout<<"\n";
}
	else
	{
		printroottoleafpath(root->left,path,pathlen);
		printroottoleafpath(root->right,path,pathlen);
		
	}
	
	
}



void printallroottoleafpaths(struct node*root)
{
	
	int path[100];
	printroottoleafpath(root,path,0);
	
	
}

int main()
{
	
	int a[]={1,2,3,4};
	
	struct node*root=converttobst(a,0,3);
//	
//	inorder(root);

  printallroottoleafpaths(root);
	
}

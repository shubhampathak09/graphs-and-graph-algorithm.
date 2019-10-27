#include<bits/stdc++.h>

using namespace std;

struct node{
	
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

void inorder(struct node*node)
{
	if(node!=NULL)
	{
		inorder(node->left);
		cout<<node->data;
		inorder(node->right);
	}
}

struct node*convert(int a[],int n,int i,struct node*root)
{
	if(i<n)
	{
		struct node*temp=createnode(a[i]);
		root=temp;
		
		root->left=convert(a,n,2*i+1,root->left);
		root->right=convert(a,n,2*i+2,root->right);
	}
	return root;
}

int main()
{
	
	int a[]={1,2,3,4,5,6,6,6,6};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	struct node*root=convert(a,n,0,root);
	
	inorder(root);
	
}


// binary search for one last time

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
};


struct node*createnode(int data){
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

struct node* createBST(int a[],int l,int r)
{
	if(l>r)
	return NULL;
	
	int mid=l+(r-l)/2;
	struct node*root=createnode(a[mid]);
	
	root->left=createBST(a,l,mid-1);
	root->right=createBST(a,mid+1,r);
	
	return root;
}

void inorder(struct node*root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	
	struct node*root=createBST(a,0,3);
	
	inorder(root);
}

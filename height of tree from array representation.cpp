#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
};

void inorder(struct node*node)
{
	if(node!=NULL)
	{
		inorder(node->left);
		cout<<node->data;
		inorder(node->right);
	}
}

struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}

struct node*createarr(int a[],int n,int i,struct node*root)
{
	if(i<n)
	{
		struct node*temp=createnode(a[i]);
		root=temp;
		
		root->left=createarr(a,n,2*i+1,root->left);
		
		root->right=createarr(a,n,2*i+2,root->right);
		
	}
	return root;
}


int height(struct node*node)
{
	if(node==NULL)
	return 0;
	
	int lh=height(node->left);
	int rh=height(node->right);
	
	if(lh>rh)
	return 1+lh;
	else
	return 1+rh;
}
int main()
{
	
	int a[]={5,3,1,6,2,2};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	struct node*root=createarr(a,n,0,root);
	
	inorder(root);
	
	cout<<"\n";
	 cout<<height(root);
	 
	
}

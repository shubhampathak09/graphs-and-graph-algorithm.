#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
};

int res=0;

int countnode(struct node*root)
{
	  if(root==NULL)
	  return 0;
	  
	  if(root->left && root->right)
	  res++;
	  
	  return countnode(root->left)+countnode(root->right)+res;
}

struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}

//void convertarray(int a[],int n,struct node*root,int i)
//{
//	if(i<n)
//	{
//	
//	a[i]=root->data;
//	a[2*i+1]=convertarray(a,n,root->left,2*i+1);
//	a[2*i+2]=convertarray(a,n,root->right,2*i+2);
//	
//}
//}


int main()
{
	struct node*root=createnode(1);
	
	root->left=createnode(2);
	
	root->right=createnode(3);
	
	cout<<countnode(root);
}


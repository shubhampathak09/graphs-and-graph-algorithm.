//given array representation of tree
//get diameter

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

int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}

void inorder(struct node*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
	}
}

int diameter(struct node*node)
{
	if(node==NULL)
	return 0;
	
	int ldiameter=diameter(node->left);
	int rdiameter=diameter(node->right);
	
	int lheight=height(node->left);
	int rheight=height(node->right);
	
	return max(lheight+rheight+1,max(ldiameter,rdiameter));
	
}

int main()
{
	int a[]={2,3,4,1,5,6,2,2};
	
	int n=sizeof(a)/sizeof(a[0]);
	
	struct node*root=convert(a,n,0,root);
	
	inorder(root);
	
	cout<<endl;
	
	cout<<height(root);
	
	cout<<endl;
	
	cout<<diameter(root);
	
	
	
	
	
	
	
}


// to create a binary tree from parent array representation
// the indexex in array are nodes in binary tree
//while values in array are its parents

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*left;
	struct node*right;
};

struct node*newnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}

void createnode(int parent[],int i,node*created[],node**root)
{
	if(created[i]!=NULL)
	return;
	
	created[i]=newnode(i);
	
	if(parent[i]==-1)
	{
	*root=created[i];
	return;
   }
   
   if(created[parent[i]]==NULL)
   createnode(parent,parent[i],created,root);
    node* p=created[parent[i]];
   
   if(p->left==NULL)
   p->left=created[i];
   else
   p->right=created[i];
}
node*createtree(int parent[],int n)
{
	
	node*created[n];
	
	for(int i=0;i<n;i++)
	created[i]=NULL;
	
	node*root=NULL;
	for(int i=0;i<n;i++)
	createnode(parent,i,created,&root);
	
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
	int parent[]={-1,0,0,1,1,3,5};
	int n=sizeof(parent)/sizeof(parent[0]);
	
	node*root=createtree(parent,n);
	inorder(root);
	
	}	
	


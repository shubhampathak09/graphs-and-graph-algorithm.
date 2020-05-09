
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


int findlevel(struct node*root,int val,int level)
{
	if(root==NULL)
	return 0;
	
	if(root->data==val)
	return level;
	
	int l=findlevel(root->left,val,level+1);
	if(l!=0)
	return l;
	
	l= findlevel(root->right,val,level+1);
	return l;
}



int main()
{
	
	struct node *root=createnode(1);
	
	root->left=createnode(2);
	
	root->right=createnode(3);
	
	root->left->left=createnode(4);
	
	cout<<findlevel(root,2,1)<<endl;
	
	cout<<findlevel(root,4,1)<<endl;
	
	
}

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

struct node*pretobst(vector<int>preorder)
{
	if(preorder.empty())
	return NULL;
	
	vector<int>greater,smaller;
	
	int root_data=preorder[0];
	
	for(int i=1;i<preorder.size();i++)
	{
		if(preorder[i]<root_data)
		smaller.push_back(preorder[i]);
		else
		greater.push_back(preorder[i]);
	}
	
	struct node*root=createnode(root_data);
	root->left=pretobst(smaller);
	root->right=pretobst(greater);
	
	return root;
}
void inorder(struct node*root)
{
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<"\t";
	inorder(root->right);
}

int main()
{
	
	
	//int preorder[]={8,5,1,7,10,12};
	vector<int> preorder={8,5,1,7,10,12};
	
	
	struct node*root=pretobst(preorder);
	
	inorder(root);
	
	
	
}

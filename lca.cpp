
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

void inorder(struct node*node)
{
	if(node==NULL)
	return;
	
	cout<<node->data;
	inorder(node->left);
	inorder(node->right);
	
}


bool findpath(struct node*root,vector<int>&path,int key)
{
	if(root==NULL)
	return false;
	
	path.push_back(root->data);
	
	if(root->data==key)
	return true;
	
	if(((root->left)&&findpath(root->left,path,key))||((root->right)&&findpath(root->right,path,key)))
	return true;
	
	path.pop_back();
	return false;
	
}

int lca(struct node*root,int n1,int n2)
{
	
	vector<int>path1;
	vector<int>path2;
	
	if(!(findpath(root,path1,n1))||!(findpath(root,path2,n2)))
	return false;
	
	int i;
	
	for(i=0;i<path1.size()&&i<path2.size();i++)
	if(path1[i]!=path2[i])
	break;
	
	return path1[i-1];
}

 

int main()
{
	
	struct node*root=createnode(1);
	root->left=createnode(2);
	root->right=createnode(3);
	root->right->right=createnode(4);
	inorder(root);
	cout<<endl;
	
	cout<<lca(root,2,4);
	
	
}

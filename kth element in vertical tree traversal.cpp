// failing for some test cases where nodes lie at same horizontl dist
// failing for k=6 0 ? output?


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
	
	struct node *node=(struct node*)malloc(sizeof(struct node));
	
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	
	return node;
	
}






void verticalordertraversal(struct node *root,int hd,map<int,vector<int>> &m)
{
	
	if(root==NULL)
	return;

m[hd].push_back(root->data);
verticalordertraversal(root->left,hd-1,m);	
verticalordertraversal(root->right,hd+1,m);

	
}


int printkthverticalnode(struct node*root,int k)
{
	
	int count=0;
	
	map<int,vector<int>>m;
	
	verticalordertraversal(root,0,m);
	
	map<int,vector<int>>::iterator i;
	
	
	
	for(i=m.begin();i!=m.end();i++)
	{
		for(int j=0;j<i->second.size();i++)
		{
			count++;
			if(count==k)
			return i->second[j];
		}
		
	}
	
	return -1;
}


int main()
{
	
	
	struct node*root=createnode(1);
	
	root->left=createnode(2);
	
	root->right=createnode(3);
	
	
	root->left->left=createnode(4);
	
	root->left->right=createnode(5);
	
	root->left->left->left=createnode(6);
	
	cout<<printkthverticalnode(root,3);
	
	
}

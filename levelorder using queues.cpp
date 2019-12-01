
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
	
	node->left=NULL;
	node->right=NULL;
	
}


void levelorder(struct node*root)
{
	
	if(root==NULL)
	return;
	
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		
		struct node*node=q.front();
		cout<<node->data<<" ";
		q.pop();
		
		if(node->left!=NULL)
		q.push(node->left);
        
        if(node->right!=NULL)
        q.push(node->right);
        
	}
	
}


int main()
{
	
	struct node*node=createnode(1);
	node->left=createnode(2);
	node->right=createnode(3);
	
	levelorder(node);
}

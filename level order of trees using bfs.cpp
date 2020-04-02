// level order traversal using bfs or queues

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
	
	return node;
}

void printlevelorder(struct node*root)
{
	
	if(root==NULL)
	return;
	
	queue<node*>q;
	
	q.push(root);
	
	while(!q.empty())
	{
		
		
		struct node*fr=q.front();
		cout<<fr->data<<" ";
		q.pop();
		if(fr->left!=NULL)
		q.push(fr->left);
		if(fr->right!=NULL)
		q.push(fr->right);
	}
}

int main()
{
	

struct node*root=createnode(1);
root->left=createnode(2);
root->right=createnode(3);

printlevelorder(root);
	
}

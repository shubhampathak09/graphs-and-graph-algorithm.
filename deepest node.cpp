#include<bits/stdc++.h>

using namespace std;

// deepest node in a tree


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

void find(struct node*node,int level,int &maxlevel,int &value)

{
	
	if(node!=NULL)
	{
		
		find(node->left,level++,maxlevel,value);
		
		if(node->data>value)
		{
			value=node->data;
			maxlevel=level;
		}
		
		find(node->right,level,maxlevel,value);
		
	}
	
	
}


int main()
{
	struct node *node=createnode(1);
	
	node->left=createnode(2);
	
	node->left->left=createnode(3);
	
	int maxlevel=-1,value=-1;
	
	find(node,0,maxlevel,value);
	
	cout<<value;
}



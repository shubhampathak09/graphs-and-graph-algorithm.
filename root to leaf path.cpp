
#include<bits/stdc++.h>

using namespace std;

stack<int> s1,s2;

struct node
{
	int data;
	struct node*left;
	struct node*right;
};



void printstack(stack<int> s1)
{
	stack<int> s2;
  	
  		
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
		
	}
	while(!s2.empty())
	{
		cout<<s2.top();
		s2.pop();
	}
	
	cout<<endl;
	
}
struct node*createnode(int data)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
}

void inorder(struct node*node)
{
	if(node!=NULL)
	{
		inorder(node->left);
		cout<<node->data;
		inorder(node->right);
	}
	
}

int calmax(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}


int sum=0;

int stacksum(stack<int>s)
{
	
	while(!s.empty())
	{
		sum=sum+s.top();
		s.pop();
	}
	return sum;
}


int maximum=INT_MIN;


void roottoleafpath(struct node*node)
{
	
	if(node==NULL)
	return;
	
	s1.push(node->data);
	
	roottoleafpath(node->left);
	
	if(node->left==NULL && node->right==NULL)
	{
		printstack(s1);
	//	maximum=calmax(maximum,stacksum(s1));
	   // cout<<stacksum(s1);
	   // cout<<endl;
	    
	
	}
	
	roottoleafpath(node->right);
	
	s1.pop();
}


int main()
{
	
	struct node*root=createnode(1);
	
	root->left=createnode(2);
	
	root->left->left=createnode(6);
	
	root->left->right=createnode(7);
	
	root->right=createnode(3);
	
	roottoleafpath(root);
	
	//cout<<maximum;
	
}


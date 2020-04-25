#include<bits/stdc++.h>

using namespace std;


struct node{
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

void inorder(struct node*root)
{
	
	if(root==NULL)
	return;
	
	inorder(root->left);
	cout<<root->data<<"\t";
	
	inorder(root->right);
	
	
}


struct node*constructBstUtil(int preorder[],int low,int high,int *preindex,int size)
{
	
	if(low>high||*preindex>=size)
	return NULL;
	
	
	node*root=createnode(preorder[*preindex]); //start case
	
	*preindex=*preindex+1;
	
	
	if(low==high)
	return root;
	
	int i;
	for(i=low;i<=high;i++)
	if(preorder[i]>root->data)
	break;
	
	root->left=constructBstUtil(preorder,*preindex,i-1,preindex,size);
	
	root->right=constructBstUtil(preorder,i,high,preindex,size);
	
	return root;
	
}


struct node*constructBst(int preorder[],int size)
{
	
	int preindex=0;
	
	return constructBstUtil(preorder,0,size-1,&preindex,size);
}

int main()
{
	
	int preorder[]={10,5,1,7,40,50};
	
	struct node *root=constructBst(preorder,6);
	
	inorder(root);
}

#include<bits/stdc++.h>

using namespace std;


struct node
{
    int data;
    struct node*left;
    struct node*right;
};


struct node*cretanode(int data)
{
    struct node*node=(struct node*)malloc(sizeof(struct node));

    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return node;
}

void inorder(struct node*node)
{
    if(node==NULL)
        return;
    inorder(node->left);
    cout<<node->data;
    inorder(node->right);
}

int main()
{

    struct node*node=cretanode(1);
    node->left=cretanode(2);
    node->right=cretanode(3);

inorder(node);





}

#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node*next;
};

void push(struct node**head_ref,int data)
{
	
	struct node*node=(struct node*)malloc(sizeof(struct node));
	
	node->data=data;
	
	node->next=(*head_ref);
	
	(*head_ref)=node;
}

void insertafter(struct node*prev,int data)
{
	if(prev==NULL)
	return;
	
	node*new_node=(struct node*)malloc(sizeof(struct node));
	
	new_node->data=data;
	
	new_node->next=prev->next;
	
	prev->next=new_node;
	
	}
	
void insertend(node**head_ref,int new_data)
{
	
	node*new_node=new node();
	
	node *last=*head_ref;
	
	new_node->data=new_data;
	
	new_node->next=NULL;
	
	
	if(*head_ref==NULL)
	{
		*head_ref=new_node;
		return;
	}
	
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=new_node;
	return;
	}	
	
int main()
{
	
	}	

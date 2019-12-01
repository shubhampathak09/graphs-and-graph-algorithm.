#include<bits/stdc++.h>
using namespace std;

// removing duplicates from linked list


struct node
{
	int data;
	struct node*next;
};

void remove_dup(struct node*head)
{
	
	struct node*p=head;
	struct node*q;
	while(p!=NULL&&p->next!=NULL)
	{
		if(p->data==p->next->data)
		{
			q=p->next->next;
			if(q==NULL)
			{
				p->next=NULL;  //p->next=q;
				break;
			}
			p->next=q;
			
		}
		
		if(p->data!=p->next->data)
		{
			p=p->next;
		}
		
	}
	
	
}

struct node*createnode(int data)
{
	
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}

int main()
{
 
	struct node*head=createnode(1);
	head->next=createnode(1);
	head->next->next=createnode(2);
	remove_dup(head);
	
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}

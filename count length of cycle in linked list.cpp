// to find the length of loop in linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
};

int countnodes(struct node*n)
{
	int res=1;
	struct node*temp=n;
	while(temp->next!=n)
	{
		temp=temp->next;
		res++;
	}
	return res;
}

struct node*createnode(int key)
{
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=key;
	node->next=NULL;
	return node;
}
int countnodesinloop(struct node*head)
{
	struct node*slowptr=head;
	struct node*fasptr=head;
	
	while(slowptr&&fasptr&&fasptr->next)
	{
		slowptr=slowptr->next;
		fasptr=fasptr->next->next;
		
		if(slowptr==fasptr)  //loop found
		return countnodes(slowptr);
	}
	
	return -1;
	
}


int main()
{
	
	struct node*head=createnode(1);
	head->next=createnode(2);
	head->next->next=createnode(3);
	head->next->next->next=createnode(4);
	head->next->next->next->next= 
	(head->next);
	
	cout<<countnodesinloop(head);
}

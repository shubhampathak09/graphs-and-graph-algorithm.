
#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node*next;
};

struct node*createnode(int data)
{
	
	struct node*node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}


bool detectcyc(struct node*head)
{
	
	struct node*fptr=head;
	struct node*sptr=head;
	
	while(fptr&&sptr&&sptr->next)
	{
		sptr=head->next;
		fptr=head->next->next;
		
		if(fptr==sptr)
		return true;
	}
	 return false;
}

int main()
{
	struct node*head=createnode(1);
	head->next=createnode(2);
	head->next->next=head->next;
	cout<<detectcyc(head);
}

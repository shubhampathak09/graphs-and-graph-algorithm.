#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node*next;
};


void reverse(struct node*head)
{
	if(head==NULL)
	return;
	
	 else
	 {
	 	reverse(head->next);
	 	cout<<head->data;
	 }

}

int main()
{

 
 struct node*head=(struct node*)malloc(sizeof(struct node));
 struct node*first=(struct node*)malloc(sizeof(struct node));
 struct node*second=(struct node*)malloc(sizeof(struct node));
 
 head->data=1;
 head->next=first;
 first->data=2;
 head->next->next=second;
 second->data=3;
 second->next=NULL;
 
 
 reverse(head);
 
}

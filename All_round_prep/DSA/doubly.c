// doubly linked list in which the last node loops back to or points to the first node
//assume a list in this manner 1->2->3!!

#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};

int main()
{
	//initialize nodes//
	
	struct node* head;
	struct node*one=NULL;
	struct node*two=NULL;
	struct node*three=NULL;
	
	//Allocate memory//
	
	one=malloc(sizeof(struct node));
	two=malloc(sizeof(struct node));
	three=malloc(sizeof(struct node));
	
	//assign data//
	
	one->data = 1;
	two->data = 2;
	three->data= 3;
	
	//connect nodes//
	
	one->next=two;
	one->prev=NULL;
	
	two->next=three;
	two->prev=one;
	
	three->next=NULL; 
	three->prev=two;

	printf("\n the list is: ");
	printf("%d->%d->%d",one->data,one->next->data,one->next->next->data);
	
	printf("\n element before %d is %d",two->data,two->prev->data);
	
}
	
	

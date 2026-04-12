#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	//initialize nodes//
	
	struct node *head;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	
	//allocate memory//
	
	one= malloc(sizeof(struct node));
	two= malloc(sizeof(struct node));
	three= malloc(sizeof(struct node));
	
	
	//assign data//
	
	one->data=1;
	two->data=2;
	three->data=3;
	
	
	//connect nodes//
	
	one->next=two;
	two->next=three;
	three->next=one;
	
	
	head=one;
	
	printf(" the list is a follows");
	printf("%d->%d->%d",head->data,head->next->data,head->next->next->data);
	printf("\n%d points to %d",three->data,three->next->data);
	
}
	
	
	
		
	

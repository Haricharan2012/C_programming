#include<stdio.h>
#include<stdlib.h>
//x	

//creating node
struct node
{
  int value;
  struct node *next;
};

void printlist(struct node *p);


int main()
{
	//initialize nodes
	struct node *head;
	struct node *one=NULL;
	struct node *two=NULL;
	struct node *three=NULL;
	
	//allocate memory
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three 	= malloc(sizeof(struct node));
	
	//assign values
	one->value=5;
	two->value=10;
	three->value=15;
	
	//connect nodes
	one->next=two;
	two->next=three;
	three->next=NULL;
	
	//print node-value
	head=one;
	
	printlist(head);
}

void printlist(struct node *p)
{
	while(p!=NULL)
	{
		printf(" 	%d",p->value);
		p=p->next;
	}
}
	

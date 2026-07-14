#include<stdio.h>
#include<stdlib.h>

//structure of node

struct node
{
	int data; //data part
	struct node *next  // address part
}*head;


//fuction declaration
void create_list(int);
void rev_list();
void disp();

int main()
{
	int num,choice;
	
	//create list
	
	printf("\n enter the total number of nodes in list");
	scanf("%d",&num);
	create_list(num);
	
	printf("\n the original list is : ");
	disp();
	
	printf("\n press 1 to reverse the list"):
	scanf("%d",&choice);
	
	if(choice==1)
	{
		rev_list();
	}
	
	printf("\n the reversed list is : ");
	disp();
	
	return 0;
}


void create_list(int num)
{
	struct node *newnode,*temp;
	int data,i;
	
	if(num<=0)
	{
		printf("\n nodes cannot be less than 0");
		return;
	}
	
	//allocate memory to head
	
	head=(struct node*)malloc(sizeof(struct node);
	
	//if allocation failed
	
	if(head==NULL)
	{
		printf("\n unable to allocate memory for the node");
	}
	
	else
	{
		printf("\n enter the data of the initial node");
		scanf("%d",&data);
		
		head->data=data; // link data part of head to this var
		head->next=NULL;
		
		temp=head;
		
		//create n nodes and add to the linked list
		
		for(i=2;i<=n;i++)
		{
			//allocate memory for newnode
			newnode=(struct node*)malloc(sizeof(struct node);
			
			//if allocation was not possible
			if(newnode==NULL)
			{
				printf("\n unable to allocate memory");
				break;
			}
			
			else
			{
				printf("\n enter data of node %d",i);
				scanf("%d",&data);
				
				newnode->data=data;
				newnode->next=NULL;
				
				temp->next=newnode; //head points to next new node
				temp=temp->next; //for traversal of list
				
			}
			printf("singly linked list created sucessfully");
		}
	}
	
void rev_list()
{
	struct node *prevnode,*currnode;
	
	if(head!=null)
	{
		prevnode = head; //prevnode should point to first node
		currnode = head->next; //current node should point to second node
		head = head->next; // head also should point to second element
		
		prevnode->next=NULL; //first node must become last node after reversal
		
		while(head!=NULL)
		{
			head=head->next; //move to sucessive elements
			currnode->next=prevnode; //connect currnode to previous node
			prevnode = currnode; // prevnode now points to currnode
			currnode = head; //make currnode point to head
		}
		
		head = prevnode; //make last node as head
		printf("\n succesfully reversed");
	}
}



void disp()
{
	struct node *temp;
	
	//if list is emty head  null
	
	if(head==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("\n data = %d\n",temp->data);
			temp=temp->next;
		}
	}
}
		
		
		
			
		
	
	




	

#include<stdio.h>

struct node
{
	int data;
	struct node* next;
}

int main()
{
	struct node* head=NULL;
		
	//insertion//
	
	insert_beg(&head,1);
	insert_beg(&head,2);
	insert_mid(head->next,3);
	insert_mid(head->next,4);
	insert_end(&head,5);
	
	//print
	printf("\n the linked list is");
	printlist(head);
	
	//deletion
	
	deletenode(&head,3);
	//print
	printf("\n after deletion");
	printlist(head);
	
	
	//search
	int find=5;
	
	if(searchnode(&head,find))
	{
		printf("\n item exists");
	}
	else
	{
		printf("\n item dosen't exists");
	}
	
	//sorting
	
	sortlist(&head);
	printf("\n the sorted list is");
	printlist(head);
}

//---------------------Insertion---------------------------------------------------------------------//

//---------------------Insert_Beg---------------------------------------------------//
void insert_beg(struct node** head,int data)
{
	//allocate memmory
	struct node* newnode= struct node* malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*head; //new node points to first element
	*head=newnode; //head pointer points to newnode
}

//---------------------Insert_Mid--------------------------------------------------//
void insert_mid(struct node* prev,int data)
{
	if(prev==NULL)
	{
		printf("\n prev ele can't be null");
		return;
	}
	
	else
	{
		//allocate memory
		struct node* newnode=struct node* malloc(sizeof(struct node));
		newnode->data=data;
		newnode->next=prev->next;
		prev->next=newnode;
	}
}

//---------------------Insert_end-------------------------------------------------//

void insert_end(struct node** head,int data)
{
	//ALLOCATE MEMORY
	struct node* newnode=struct node* malloc(sizeof(struct node));
	struct node* last=*head;
	
	newnode->data=data;
	newnode->next=NULL; //supposed to be last node
	
	while(last!=NULL)
	{
		last=last->next;
	}
	last->next=newnode;
	return;
}
	
	

	
	
	
	
			
	

	

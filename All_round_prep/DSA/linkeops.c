#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};

void insert_beg(struct node **head,int data);
void insert_mid(struct node *prev,int data);
void insert_end(struct node **head,int data);
void deletenode(struct node **head,int key);
int searchnode(struct node *head,int key);
void sortlist(struct node **head);
void printlist(struct node *node);




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
	printf("\n");
	printlist(head);
	
	//deletion
	
	deletenode(&head,3);
	//print
	printf("\n after deletion");
	printf("\n");
	printlist(head);
	
	
	//search
	int find=5;
	
	if (searchnode(head,find))
	{
		printf("\n item exists");
		printf("\n");
	}
	else
	{
		printf("\n item dosen't exists");
		printf("\n");
	}
	
	//sorting
	
	sortlist(&head);
	printf("\n the sorted list is");
	printf("\n");
	printlist(head);
}

//---------------------Insertion---------------------------------------------------------------------//

//---------------------Insert_Beg---------------------------------------------------//
void insert_beg(struct node **head,int data)
{
	//allocate memmory
	struct node* newnode= (struct node*) malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*head; //new node points to first element
	*head=newnode; //head pointer points to newnode
}

//---------------------Insert_Mid--------------------------------------------------//
void insert_mid(struct node *prev,int data)
{
	if(prev==NULL)
	{
		printf("\n prev ele can't be null");
		return;
	}
		
	else
	{
		//allocate memory
		struct node* newnode=(struct node*) malloc(sizeof(struct node));
		newnode->data=data;
		newnode->next=prev->next; //new node points to whatever previous node was pointing to
		prev->next=newnode; //previous node points to new node
	}
}

//---------------------Insert_end-------------------------------------------------//

void insert_end(struct node **head,int data)
{
	//ALLOCATE MEMORY
	struct node* newnode=(struct node*) malloc(sizeof(struct node));
	struct node* last=*head; //start from beginning
	
	newnode->data=data;
	newnode->next=NULL; //supposed to be last node
	
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=newnode;
	return;
}

//----------------------Deletion---------------------------------------------------//

void deletenode(struct node **head,int key)
{
	struct node* temp=*head; 
	struct node* prev=NULL;
	
	//if found in head//
	if(temp!=NULL && temp->data==key)
	{
		
		*head=temp->next;
		free(temp);
		return;
	}
	
	//find key to be deleted
	while(temp!=NULL && temp->data !=key)
	{
		prev=temp;
		temp=temp->next;
	}
	
	//if key not found
	
	if(temp==NULL)
	{
		return;
	}
	
	//deletenode
	prev->next=temp->next; //remove node , this points to whatever temp was pointing to
	free(temp);
}

//----------------search node-----------------------//
int searchnode	(struct node *head,int key)
{
	struct node *current=  head; //start from head
	
	while(current != NULL)
	{
		if(current->data==key)  //if element matches with key 
		{
			return 1;
		}
		current=current->next;  //traverse through other elements
	}
		return 0;
}


//------------------sortlist------------------------//

void sortlist(struct node **head)
{
	struct node *current=*head; //start from head
	struct node *index=NULL; //nxt element 
	
	int temp;
	
	if(*head==NULL)
	{
		return;
	}
	else
	{
		while(current!=NULL)
		{
			index=current->next;//points to next element 
			
			while(index!=NULL)
			{
				if(current->data>index->data)
				{
					temp=current->data;
					current->data=index->data;
					index->data=temp;
				}
				index=index->next;
			}
			current=current->next;
		}
	}
}

//----------------printlist------------------------//

void printlist(struct node *node)
{
	while(node!=NULL)
	{
		printf("%d -> ",node->data);
		node=node->next;
	}
	 printf("NULL");
}
	
	
	
	
	

	
	

	
	
	
	
			
	

	

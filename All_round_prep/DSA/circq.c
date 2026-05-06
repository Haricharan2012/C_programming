#include<stdio.h>

int isempty();
int isfull();
void enqueue();
void dequeue();
void disp();

#define SIZE 5

int front=-1;
int rear=-1;
int items[SIZE];
int val;

int main()
{
	printf("\n--------------------circular queue implementation--------------------");
	int choice;
	
	while(1)
	{
		printf("\n1.Insertion (Enqueue)");
		printf("\n2.deletion (dequeue)");
		printf("\n3.display");
		printf("\n Enter your choice ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: printf("\n-------------Insertion----------------\n");
				enqueue();
				break;
				
			case 2: printf("\n-------------deletion-----------------\n");
				dequeue();
				break;
				
			case 3: printf("\n-------------display------------------\n");
				disp();
				break;
		}
	}
}
		
		int isfull()
		{
			if((front==(rear+1)%SIZE)||(front==0 && rear==SIZE-1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		int isempty()
		{
			if(front==-1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		void enqueue()
		{
			if(isfull())
			{
				printf("\n queue is full");
			}
			else
			{	
				
				printf("\n enter the value to be inserted in queue ");
				scanf("%d",&val);
				if(front==-1)
				{
					front=0;
				}
					rear=(rear+1)%SIZE;
					items[rear]=val;
					printf("\n item inserted");
			}
		}
	
		
		void dequeue()
		{
			if(isempty())
			{
				printf("\n queue is empty");
			}
			else
			{
				int ele;
				ele=items[front];
				if(front==rear)
				{
					front=-1;  //reset
					rear=-1;
				}
				else
				{	
					front=(front+1)%SIZE;
					printf("\n the element to be deleted id %d",ele);
				}
			}
		}
		
		void disp()
		{
			int i;
			if(isempty())
			{
				printf("\n queue is empty");
			}
			else
			{
				for( i=front;i!=rear;i=(i+1)%SIZE)
				{
					printf("|%d|",items[i]);
				}
				//printf("\n front is %d",front);
				printf("|%d|",items[rear]);
			}
			printf("\n");
		}
	

		
				
		
		
		


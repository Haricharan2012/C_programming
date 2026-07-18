#include<stdio.h>
#define SIZE 5

void dequeue();
void enqueue();
void disp();

int items[SIZE];
int front=-1;
int rear=-1;

int main()
{
	
	int choice;
	
	while(1)
	{
		printf("\n---------- Queue implementation--------------");
		printf("\n 1. insertion (Enqueue)");
		printf("\n 2. deletion  (dequeue)");
		printf("\n 3. display");
		
		printf("\n enter your choice! ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("\n -----------Enqueue------------");
			enqueue();
			break;
			
			case 2: printf("\n-------------dequeue--------------");
			dequeue();
			break;
			
			case 3: printf("\n--------------display-----------------\n");
			disp();
			break;
		}
	}
}

	void enqueue()
	{
		int val;
				
		printf("\n enter the value to insert in queue ");
		scanf("%d",&val);
				
		if(rear==SIZE-1)
		{
			printf("\n queue is full");
		}
		else
		{
			if(front==-1)
			{
				front=0;
			}
			rear=rear+1;
			items[rear]=val;
			printf("\n value inserted");
		}
	}
	
	void dequeue()
	{
		if(front==-1)
		{
			printf("\n queue is empty");
		}
		else
		{
			front=front+1;
					
			if(front>rear)
			{
				front=rear=-1;
			}
		}
	}
	
	void disp()
	{
		if(rear==-1)
		{
			printf("\n queue is empty");
		}
		else
		{
			for(int i=front;i<=rear;i++)
			{
				printf("|%d|",items[i]);
			}
			printf("\n");
		}
	}
						
			
			
		
		

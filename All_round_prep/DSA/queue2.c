#include<stdio.h>
#define SIZE 5

int main()
{
	int items[SIZE]
	int front=-1;
	int rear=-1;
	int choice;
	
	while(1)
	{
		printf("\n---------- Queue implementation--------------");
		printf("\n 1. insertion (Enqueue)");
		printf("\n 2. deletion  (dequeue)");
		printf("\n 3. display");
		
		printf("\n enter your choice!");
		scanf("%d",choice);
		
		switch(choice)
		{
			case 1: printf("\n -----------Enqueue------------");
			
			enqueue()
			{
				int val;
				
				printf("\n enter the value to insert in queue");
				scanf("%d",&val);
				
				if(rear==size-1)
				{
					printf("\n queue is full");
				}
				else
				{
					front=0;
					rear=rear+1;
					items[rear]=val;
					printf("\n value inserted");
				}
			}
			break;
			
			case 2: printf("-------------dequeue--------------");
			
			dequeue()
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
			break;
			
			case 3: printf("--------------display-----------------");
			
			disp()
			{
				if(rear==-1)
				{
					printf("\n queue is empty");
				}
				else
				{
					for(int i=front;i<=rear;i++)
					{
						printf("%d",items[i]);
					}
					printf("\n");
				}
			}
			break;
		}
	}
						
			
			
		
		

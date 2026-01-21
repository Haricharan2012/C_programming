#include<stdio.h>
#include<stdlib.h>

#define SIZE 5


void enqueue(int val);
void dequeue();
void disp();

int item[SIZE],front=-1,rear=-1;

int main()
{
	printf("\n program to demonstrate queues");
	printf("\n------------------------------");
	
	dequeue(); //can't dequeue empt queue
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	
	disp();
	
	dequeue(); //removes first element
	
	disp();
}

void enqueue(int val)
{
	if(rear==SIZE-1)
	{
		printf("\n queue is full");
	}
	else
	{
		front=0;
		rear=rear+1;
		item[rear]=val;
		printf("\n the element inserted is - %d",val);
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
 		printf("\n the item removed is - %d",item[front]);
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
 	      printf("\n the queue is --");
 		for(int i=front;i<=rear;i++)
 		{
 			printf("%d",item[i]);
 		}
 	}
 	printf("\n");
 }

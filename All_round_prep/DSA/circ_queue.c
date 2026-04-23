#include<stdio.h>

int isempty();
int isfull();
void enqueue(int val);
void dequeue();
void disp();

#define SIZE 5

int front=-1;
int rear=-1;
int items[SIZE];

int main()
{
	dequeue();
	
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	
	disp();
	dequeue();
	disp();
}

int isfull()
{
	if((front==(rear+1)%size)||(front==0 && rear==SIZE-1))
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

int enqueue(int val)
{
	if(isfull())
	{
		printf("\n queue is full");
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear=(rear+1)%SIZE;
			item[rear]=val;
			printf("\n the inserted element is %d",val);
		}
	}
}

int dequeue()
{
	int element;
	if(isempty())
	{
		printf("\n queue is empty");
	}
	else
	{
		element=item[front];
		if(front==rear)
		{
		front=-1;
		rear=-1;    //only 1 element in the queue
		}
		else
		{
			front=(front+1)%SIZE;
			printf("\n the element to be deleted is %d",element);
		}
	}
	
} 

void display()
{
	int i;
	if(isempty())
	{
		printf("\n queue is empty");
	}
	else
	{
		printf("\n front is %d",front);
		printf("\n the items are..");
		for(i=front;i!=rear;i=(i+1)%SIZE)
		{	
			printf("\n %d",items[i]);
		}
		printf("\ the rear is %d",rear);
	}
}
	
```

		


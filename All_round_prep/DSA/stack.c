#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
int isFull();
int isEmpty();
void disp();

#define MAX 10

int top=-1;
int item[MAX];
int count=0;	



int main()
{
	
	
        push(1);
        push(2);
        push(3);
        push(4);
        push(5);
        
        disp();
        
        pop();
        printf("\n after popping the stack is");
        disp();
   
        pop();
        printf("\n after popping the stack is");
        disp();
	
}

//Check if stack is full//
int isFull()
{
	if(top== MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//check if stack is empty//
int  isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

//insert element to the stack"
void push(int x)
{
	if(isFull())
	{
		printf("\n the stack is Full");
		printf("---------------------");
	}
	else
	{
		top++;
		item[top]=x;
		
	}
	count++;
}

//delete element from the stack//
void pop()
{
	if(isEmpty())
	{
		printf("\n the stack is empty");
		printf("----------------------");
	}
	else
	{
		printf("\n the item to be popped is %d",item[top]);
		top--;
	}
	count--;
	printf("\n");
}

//display stack elements//	
void disp()
{
	for(int i=0;i<count;i++)
	{
		printf("%d",item[i]);
	}
	printf("\n");
}


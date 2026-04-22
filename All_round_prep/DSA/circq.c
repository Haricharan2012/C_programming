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
			case 1: printf("\n-------------Insertion----------------");
				enqueue();
				break;
				
			case 2: printf("\n-------------deletion-----------------");
				deletion();
				break;
				
			case 3: printf("\n-------------display------------------");
				disp();
				break;
		}
		
		
		


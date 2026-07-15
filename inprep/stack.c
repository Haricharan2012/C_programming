#include<stdio.h>
#include<stdlib.h>

void push(int);
void pop();
int isfull();
int isempty();
void disp();

#define MAX 10
int top=-1;
int item[MAX];
int count=0;

int main()
{
	int choice;
	int ele;
	
	while(1)
	{
		printf("\n-----Stack implementation------");
		printf("\n-----1.push operation----------");
		printf("\n-----2.pop operation-----------");
		printf("\n-----3.display operation-------");
		printf("\n-----4.exit operation ---------");
		printf("\n");
		
		printf("\n enter your choice  ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("\n enter the element to be inserted");
				scanf("%d",&ele);
				push(ele);
				break;
				
		        case 2: pop();
		        	break;
		        
		        case 3: disp();
		        	break;
		        	
		        case 4: exit(0);
		        	break;
		        	
		       default: printf("\n invalid condition");
		       		break;
		}
		
	}
}

	
	
	int isfull()
	{
		if(top==MAX-1)
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
		if(top==-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	void push(int ele)
	{
		if(isfull())
		{
			printf("\n stack is full");
			printf("\n--------------");
		}
		else
		{
			top=top+1;
			item[top]=ele;
			count=count+1;
		}
	}
	
	void pop()
	{
		if(isempty())
		{
			printf("\n stack is empty");
			printf("-----------------");
		}
		else
		{
			printf("\n item to be deleted is %d",item[top]);
			top=top-1;
			count=count-1;
		}
	}
	
	
	void disp()
	{	
		for(int i=0;i<count;i++)
		{
			printf("%d  ",item[i]);
		}
		printf("\n");
	}
	
	
	
	
		        

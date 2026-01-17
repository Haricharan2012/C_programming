#include<stdio.h>
#include<stdlib.h>

#define MAX 10

void push();
void pop();
void disp();
int isFull();
int isEmpty();


int top=-1;  //initially stack is empty
int item[MAX];        
int ele;    //ele to be inserted
int choice; //choice of user
        

int main()
{

        
	printf("\n program to implement stack");
	printf("------------------------------");
	
	while(1)
	{
		printf("\n1.push item to stack");
		printf("\n2.pop item from stack");
		printf("\n3.display the stack");
		printf("\n4.exit");
		printf("\n enter your choice");
		scanf("%d",&choice);
		
	
		
	switch(choice)
	{
		case 1: push();
		        break;
		         
		       
	        case 2: pop();
	                break;
	                 
	                 
	        case 3: disp();
	                break;
	         
	        case 4: exit(0);
	        
	        default:printf("\n invalid choice try again");
	                 
	}
}

}
	//check if stack is full//
	int isFull()
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
	
	//checks if stack is empty//
	int isEmpty()
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
	
	//function to push element into the stack//
	void push()
	{
		if(isFull())
	        {
	        	printf("\n the stack is full,overflow");
	        }
	        else
	        {
	        printf("\n enter the element to inset into the stack");
	        scanf("%d",&ele);
	        top++;
	        item[top]=ele;
	         
	        }
	        printf("\n");
	       
	        
	}
	
	//function to pop element from the stack//
	void pop()
	{
		if(isEmpty())
		{
			printf("\n the stack is empty,underflow");
		}
		else
		{
		printf("\nthe element to be popped is %d",item[top]);
		top--;
		}
		
		printf("\n");
	}
	
	//function to display stack elements//
	void disp()
	{
		for(int i=0;i<=top;i++)
		{
	         	printf(" %d",item[i]);
	        }
	        printf("\n");
	}

		
	        

	
	
	




		

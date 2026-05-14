#include<stdio.h>

void swap(int *el1, int *el2);
void heapify(int arr[],int size,int i);
void insertion(int arr[],int new);
void deletion(int arr[],int num);
void disp(int arr[],int size);

int size=0;

int main()
{
	int array[10];
	int choice;
	
	while(1)
	{
		printf("\n------------Priority_Queue_implementation----------");
		printf("\n");
		printf("\n1.------insertion-------------");
		printf("\n");
		printf("\n2.------Deletion--------------");
		printf("\n");
		printf("\n3.------display---------------");
		printf("\n");
		printf("\n Enter your choice ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
			{
				printf("\n ---------------------Insertion ------------------------");
				printf("\n");
				int new;
				printf("\n enter the element to be inserted: ");
				scanf("%d",&new);
				insertion(array,new);
				break;
			}
				
			case 2:
			{
				printf("\n--------------------- Deletion----------------------------");
				printf("\n");
				int num;
				printf("\n enter the element to be deleted: ");
				scanf("%d",&num);
				deletion(array,num);
				break;
			}
			
			case 3:
			{
				 printf("\n ----------------- Queue_display--------------------------");
				 printf("\n");
				 disp(array,size);
				 break;	
			}		
			
			default : printf("\n entered option does not exist, try again!");
				  break;
				  
		}
	}
	return 0;
}


void swap(int *el1,int *el2)
{
	int temp=*el2;
	*el2=*el1;
	*el1=temp;
}

void heapify(int array[],int size,int i)
{
	int largest=i;
	
	int leftch = 2*i+1;
	int rightch = 2*i+2;
	
	if(leftch<size && array[leftch]>array[largest])
	{
		largest=leftch;
	}
	if(rightch<size && array[rightch]>array[largest])
	{
		largest=rightch;
	}
	
	//swap and continue heapifying if root is not largest
	
	if(largest!=i)
	{
		swap(&array[i],&array[largest]);
		heapify(array,size,largest);
	}
}


void insertion(int array[],int new)
{

	if(size==10)
	{
		printf("\n queue is Full");
	}
	
	else if(size==0)  //if array is empty
	{
		array[0]=new;
		size=size+1; 
	}
		
	else
	{
		array[size]=new; // if array has element then addon to it 
		size=size+1;    //increment the size to accomodate the new element
		
		for(int i=size/2-1;i>=0;i--)
		{
			heapify(array,size,i);
		}
	}
}


void deletion(int array[],int num)
{

	if(size==0)
	{
		printf("\n queue is empty");
		return;
	}
	
	
	int i;
	for( i=0;i<size;i++)
	{
		if(num==array[i])
		{
			break;
		}
	}
	
	//Element not found
	
	if(i==size)
	{
		printf("\n element not found in queue");
		return;
	}
	
	swap(&array[i],&array[size-1]); //swap element to be deleted with the LAST element
	
	size=size-1; // decrement the size of array 
	
	for(int i=size/2-1;i>=0;i--)
	{
		heapify(array,size,i);
	}
	
}


void disp(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		printf("|%d|",array[i]);
	}
	printf("\n");
}

	
	





	
	
	
	
	
	
	


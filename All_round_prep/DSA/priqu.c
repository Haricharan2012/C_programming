#include<stdio.h>

void sawp(int *el1, int *el2);
void heapify(int arr[],int size,int i);
void insertion(int arr[],int new);
void deletion(int arr[],int num);
void disp(int arr[],int size);

int size=0;

void main()
{
	int array[10];
	int choice;
	printf("\n--------Priority_Queue--------");
	printf("\n1.------insertion-------------");
	printf("\n2.------Deletion--------------");
	printf("\n3.------display---------------");
	printf("\n Enter your choice");
	scanf("%d",&choice");
	
	switch(choice)
	{
		case 1: printf("\n Insertion ");
			int new;
			printf("\n enter the element to be inserted: ");
			scanf("%d",&new);
			insertion(array,new);
			break;
			
		case 2: printf("\n Deletion ");
			int num;
			printf("\n enter the element to be deleted: ");
			scanf("%d",&num);
			deletion(array,num);
			break;
			
		case 3: printf("\n Queue_display");
			disp(array,size);
			break;
			
		
		default : printf("\n entered option does not exist, try again :) ");
			  break;
			  
	}
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
		swap(&array[i],&array[largest];
		heapify(array,size,largest);
	}
}


void insertion(int array[],int new)
{
	if(size==0)  //if array is empty
	{
		array[0]=new;
		size=size+1; 
	}
	else
	{
		array[size]=new; // if array has element then addon to it 
		size=size+1;    //increment the size to accomodate the new element
		
		for(intr i=size/2-1;i>=0;i--)
		{
			heapify(array,size,i);
		}
	}
}


void deletion(int array[],int num)
{
	for(int i=0;i<size;i++)
	{
		if(num==array[i])
		{
			break;
		}
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
		printf("%d",array[i]);
	}
	printf("\n");
}

	
	





	
	
	
	
	
	
	

